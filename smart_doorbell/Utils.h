const int sec = 1000;

void printLine() {
  Serial.println();
}

template <typename T, typename... Types>
void printLine(T first, Types... other) {
  Serial.print(first);
  printLine(other...) ;
}
