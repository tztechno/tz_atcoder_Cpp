#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    if (N <= 125) {
        std::cout << static_cast<int>(4) << std::endl;
    } else if (N <= 211) {
        std::cout << static_cast<int>(6) << std::endl;
    } else {
        std::cout << static_cast<int>(8) << std::endl;
    }

    return 0;
}
