#include <iostream>
#include <cmath>

int main() {
    int A, B;
    std::cin >> A >> B;
    std::cout << static_cast<int>(std::pow(32, A - B)) << std::endl;

    return 0;
}
