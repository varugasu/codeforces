#include <iostream>
#include <algorithm>

int main() {
  int k, n, w, multiplier{1};
  std::cin >> k >> n >> w;
  int cost{k};

  while (w > 0) {
    w--;
    n -= cost;
    multiplier++;
    cost = multiplier * k;
  }

  std::cout << -std::min(n, 0) << std::endl;
}
