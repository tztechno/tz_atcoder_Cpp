#include <iostream>

int main() {
  std::string S;
  std::cin >> S;

  int n = S.size() / 2;
  char ans = S[n];

  std::cout << ans << std::endl;

  return 0;
}
