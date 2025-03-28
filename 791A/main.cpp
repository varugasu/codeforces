#include <iostream>
#include <cmath>

int main() {
  double a, b;
  std::cin >> a >> b;

  // Add a tiny bias to force the ceiling to the correct value
  int n{static_cast<int>(
      std::ceil(std::log(b / a) / std::log(3.0 / 2.0) + 1e-9))};
  std::cout << n << std::endl;

  return 0;
}
