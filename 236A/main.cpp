#include <iostream>
#include <string>

const int ALPHABET_LENGTH{26};

class LetterCounter {
 private:
  /// using boolean saves more memory because we only use 1 bit per letter
  // instead of 4 bytes (integers) per letter
  bool hashmap[ALPHABET_LENGTH] = {false};
  int uniqueLetters{0};

  int hash(char c) const { return c % ALPHABET_LENGTH; }

 public:
  void insert(char c) {
    int index{hash(c)};
    if (!hashmap[index]) {
      hashmap[index] = true;
      uniqueLetters++;
    }
  }

  int getUniqueLettersCount() { return uniqueLetters; }
};

int main() {
  std::string username;
  std::cin >> username;
  LetterCounter counter{};
  for (const char c : username) {
    counter.insert(c);
  }
  if (counter.getUniqueLettersCount() % 2 == 0) {
    std::cout << "CHAT WITH HER!" << std::endl;
  } else {
    std::cout << "IGNORE HIM!" << std::endl;
  }
}
