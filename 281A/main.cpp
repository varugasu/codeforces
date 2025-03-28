#include <iostream>

char uppercaseIfNeeded(char c) {
  if (c >= 'a' && c <= 'z') return c - 32;
  return c;
}

int main() {
  std::string word;
  std::cin >> word;
  word[0] = uppercaseIfNeeded(word[0]);
  std::cout << word << std::endl;
}
