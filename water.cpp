#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int m = N / 5;   // Integer division
    int diff = N % 5;

    int ans;

    if (diff <= 2) {
        ans = m * 5;
    } else {
        ans = (m + 1) * 5;
    }

    std::cout << ans << std::endl;

    return 0;
}
