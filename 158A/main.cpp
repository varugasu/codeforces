#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> numbers(n);

  for (int i = 0; i < n; i++) {
    std::cin >> numbers[i];
  }
  int minimumGrade{numbers[k - 1]};
  if (minimumGrade == 0) minimumGrade++;

  int participants{0};
  for (int i = 0; i < n; i++) {
    if (numbers[i] >= minimumGrade) participants++;
  }

  std::cout << participants << std::endl;
}
