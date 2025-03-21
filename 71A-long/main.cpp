#include <iostream>
#include <string>

int main() {
  int words;
  std::cin >> words;

  for (int i = 0; i < words; i++) {
    std::string word;
    std::cin >> word;

    int word_len = word.length();

    if (word_len <= 10) {
      std::cout << word << std::endl;
      continue;
    }

    std::cout << word[0] << word_len - 2 << word[word_len - 1] << std::endl;
  }
}
