#include "Constants.h"
#define LED_MAT_PIN A0
#define NUM_LEDS 64
#define BRIGHTNESS 64
#define LED_TYPE WS2812B
#define COLOR_ORDER RGB

CRGB leds[NUM_LEDS];

int pins[] = {1, 2, 3, 4, 5};
int time_per_try = 10*sec;
int time_per_letter = (int)(0.7*sec);
int reset_time = 3*sec;
int pass_limit = pow(10, (sizeof(pins) / sizeof(pins[0])) - 1);
int touch_delay = (int) (0.02 * sec);


void show_letter(int letter[]){
  for(int i= 0; i <64; i++) {
    leds[i].r  = 0;
    leds[i].g  = 255 * letter[i];;
    leds[i].b  = 0;
  }
  delay(time_per_letter);
  FastLED.show();
}

void show_letter(char c) {
  show_letter(letter_mapping[c]);
}

bool clicked(int pin) {
  return analogRead(pin) > 500;
}

bool reset_clicked() {
  int t0_reset = millis();
  while (clicked(A1) || clicked(A2)){
    delay(touch_delay);
    while(clicked(A1) && clicked(A2)){
      int curr_time = millis();
      if (curr_time - t0_reset >= 3*sec){
        return true;
      }
    }
  }
  return false;
}

void reset_matrix(){
  for(int i= 0; i <64; i++) {
    leds[i].r  = 0;
    leds[i].g  = 0;
    leds[i].b  = 0;
  }
  FastLED.show();
}

void show_success_msg(const std::string &s) {
  show_letter(HI);
  for (std::string::size_type i = 0; i < s.size(); i++) {
    show_letter(s[i]);
  }
  show_letter(love.compare(s) == 0 ? HEART : SMILEY);
  delay(reset_time);
  reset_matrix();
}

void end_try(int password) {
  if (get_name(password).empty()) {
    printLine("No matching user, try Again.");
  } 
  else {
    std::string const username = get_name(password);
    std::string const link = get_link(password);
    std::string const s = "{\"name\":\"" + username + "\", \"link\":\"" + link + "\"}";

    const char* payload = s.c_str();
    printLine("Connecting to Integromat via Node-Red, with user: ", username.c_str());
    connect_and_publish(payload);

    printLine("Publishing completed.");
    show_success_msg(username);
  }
}

void init_try() {
  int t0 = millis();
  int curr_time = millis();
  int curr_pass = 0;

  while (curr_time - t0 < time_per_try && curr_pass < pass_limit) {
    for (int p : pins) {
      if (clicked(p)) {
        delay(touch_delay);
        if (reset_clicked()) {
          printLine("Reset clicked, restarting try in 3 seconds.");
          delay(reset_time);
          init_try();
        }
        curr_pass = 10 * curr_pass + p;
        printLine("current pass: ", curr_pass);
        while (true) {
          if (!clicked(p)) {
            break;
          }
        }
      }
    }
    curr_time = millis();
  }
  
  end_try(curr_pass);
  curr_pass = 0;
  t0 = millis();
}

void init_lights() {
  FastLED.addLeds<LED_TYPE, LED_MAT_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}

void init_mqtt(){
  SerialAT.begin(115200);
  modem.restart();
  if (!modem.networkConnect(wifiSSID, wifiPass)) {
    SerialMon.println("AP connection failure ");
    while(true);
  }

  if (!modem.waitForNetwork()) {
    SerialMon.println("Network failure");
    while(true);
  }
  if (!modem.isNetworkConnected()) {
    SerialMon.println("Network disconnected");
    while(true);
  }
  mqtt.setServer(broker, 1883);
}


void setup() {
  CircuitPlayground.begin();
  Serial.begin(115200);
  init_lights();
  populate_users();
  populate_letter_mapping();
  init_mqtt();
}

void loop() {
//  std::string a = get_link(11112);
//  printLine(a.empty());
  for (int p : pins) {
    if (clicked(p)){
      init_try();
    }
  }
}
