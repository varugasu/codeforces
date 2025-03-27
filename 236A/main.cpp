#include <iostream>
#include <string>

const int ALPHABET_LENGTH{26};

class LetterCounter {
 private:
  int hashmap[ALPHABET_LENGTH] = {0};
  int uniqueLetters{0};

  int hash(char c) const { return c % ALPHABET_LENGTH; }

 public:
  void insert(char c) {
    int index{hash(c)};
    hashmap[index]++;
    if (hashmap[index] == 1) uniqueLetters++;
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
