#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    for (int i = 0; i < 256; ++i) {
        if ((A ^ i) == B) {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}
