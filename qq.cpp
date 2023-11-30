#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int ans = (S[0] - '0') * (S[2] - '0');
    std::cout << ans << std::endl;

    return 0;
}
