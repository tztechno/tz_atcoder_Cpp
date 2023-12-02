#include <iostream>

int main() {
    int D;

    // 整数の入力
    if (!(std::cin >> D)) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    double ans = static_cast<double>(D) / 100;
    std::cout << ans << std::endl;

    return 0;
}
