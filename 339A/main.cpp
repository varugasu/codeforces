#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cin >> input;

  int ones{0}, twos{0}, threes{0};
  for (const char c : input) {
    if (c == '1') ones++;
    if (c == '2') twos++;
    if (c == '3') threes++;
  }
  int length = (ones + twos + threes) * 2 - 1;
  char output[length + 1];
  for (int i = 0; i < length; i++) {
    if (i % 2 == 1) {
      output[i] = '+';
    } else if (ones > 0) {
      output[i] = '1';
      ones--;
    } else if (twos > 0) {
      output[i] = '2';
      twos--;
    } else if (threes > 0) {
      output[i] = '3';
      threes--;
    }
  }
  output[length] = '\0';
  std::cout << output << std::endl;
}
