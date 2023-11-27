#include <iostream>
#include <iomanip> // for std::setw

int main() {
    int K;
    std::cin >> K;

    int h = 21 + K / 60;
    int m = K % 60;

    // Format the output to ensure two digits for hours and minutes
    std::cout << std::setw(2) << std::setfill('0') << h << ':' << std::setw(2) << std::setfill('0') << m << std::endl;

    return 0;
}
