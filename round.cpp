#include <iostream>

int main() {
    double X;
    std::cout << "Enter a floating-point number: ";
    std::cin >> X;

    int a = static_cast<int>(X * 10);

    if (a % 10 >= 5) {
        std::cout << static_cast<int>(X) + 1 << std::endl;
    } else if (a % 10 <= 4) {
        std::cout << static_cast<int>(X) << std::endl;
    }

    return 0;
}
