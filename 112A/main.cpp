#include <iostream>
#include <string>

int getASCIICode(char c) {
  int ascii_code = static_cast<int>(c);
  if (ascii_code <= 90) ascii_code += 32;
  return ascii_code;
}

int main() {
  std::string firstInput, secondInput;
  std::cin >> firstInput >> secondInput;

  int result{0};
  for (int i = 0; i < firstInput.length(); i++) {
    int a1{getASCIICode(firstInput[i])};
    int a2{getASCIICode(secondInput[i])};
    if (a1 == a2) continue;
    if (a1 < a2) result = -1;
    if (a1 > a2) result = 1;
    break;
  }
  std::cout << result << std::endl;
}
