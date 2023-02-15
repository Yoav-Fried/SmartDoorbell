std::map<int, std::pair<std::string, std::string>> users;
std::string love = "LOVE";

/*
-- Enter Users with their matching links here, make sure links are https://
*/
void populate_users() {
  users[12345] = std::make_pair("Me", "https://bit.ly/3YB7qfo");
  users[22222] = std::make_pair("LOVE", "https://bit.ly/3lBiTNc");
  users[33333] = std::make_pair("RICK", "https://bit.ly/3lm9tF8");
}

std::string get_name(int key) {
  auto it = users.find(key);
  return (it != users.end()) ? it->second.first : "";
}

std::string get_link(int key) {
  auto it = users.find(key);
  return (it != users.end()) ? it->second.second : "";
}
