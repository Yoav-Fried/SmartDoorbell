std::map<int, std::pair<std::string, std::string>> users;

std::string michal = "MICHAL";

void populate_users() {
  users[12345] = std::make_pair("YOAV", "https://bit.ly/3S2j54t");
  users[11111] = std::make_pair("TAL", "https://bit.ly/3Xp6qJz");
  users[22222] = std::make_pair("MICHAL", "https://bit.ly/3HYPuEa");
  users[33333] = std::make_pair("ZVIKA", "https://bit.ly/3lm9tF8");
}

std::string get_name(int key) {
  auto it = users.find(key);
  return (it != users.end()) ? it->second.first : "";
}

std::string get_link(int key) {
  auto it = users.find(key);
  return (it != users.end()) ? it->second.second : "";
}
