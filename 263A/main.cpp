#include <iostream>
#include <cstdlib>

int main() {
  int i{0};
  while (true) {
    int value;
    std::cin >> value;
    if (value == 1) {
      int row{i / 5};
      int col{i % 5};

      std::cout << abs(row - 2) + abs(col - 2) << std::endl;
      break;
    }
    i++;
  }
}
