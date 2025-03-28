#include <iostream>
#include <string>

int main() {
  int n{0};
  std::string s;
  std::cin >> n >> s;
  int result{0};
  char prev{s[0]};
  for (int i = 1; i < n; i++) {
    if (prev == s[i]) result++;
    prev = s[i];
  }
  std::cout << result << std::endl;
}
