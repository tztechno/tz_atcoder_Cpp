#include <iostream>
#include <string>

int main() {
    std::string A, B;
    std::cin >> A >> B;
    int sumA = 0, sumB = 0;
    for (char ai : A) {
        sumA += ai - '0'; // Convert char to int
    }
    for (char bi : B) {
        sumB += bi - '0'; // Convert char to int
    }
    std::cout << std::max(sumA, sumB) << std::endl;
    return 0;
}
