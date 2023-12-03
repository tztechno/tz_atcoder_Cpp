#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    if (S.substr(S.size()-2) == "er") {
        std::cout << "er" << std::endl;
    } else {
        std::cout << "ist" << std::endl;
    }
    return 0;
}
