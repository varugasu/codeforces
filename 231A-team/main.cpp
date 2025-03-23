#include <iostream>
#include <string>

int main() {
  int problems{0};
  std::cin >> problems;

  int solutions{0};
  for (int i = 0; i < problems; i++) {
    int petya, vasya, tonya;
    std::cin >> petya >> vasya >> tonya;

    int know_solution{petya + vasya + tonya};
    if (know_solution >= 2) solutions++;
  }

  std::cout << solutions << std::endl;
}
