#include <iostream>
#include <string>

int main() {
  int x{0};
  int statements;
  std::cin >> statements;

  for (int i = 0; i < statements; i++) {
    std::string op;
    std::cin >> op;
    if (op[1] == '-') {
      x--;
    }
    if (op[1] == '+') {
      x++;
    }
  }
  std::cout << x << std::endl;
}
