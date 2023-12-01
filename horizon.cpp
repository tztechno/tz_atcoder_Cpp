#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double H;

    //std::cout << "Enter a value for H: ";
    std::cin >> H;

    double result = sqrt(H * (12800000 + H));
    std::cout << std::fixed << std::setprecision(6) << result << std::endl;

    return 0;
}
