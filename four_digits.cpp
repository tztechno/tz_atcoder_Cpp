#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    s.erase(s.find_last_not_of(" \n\r\t") + 1);

    int n = s.length();

    if (n < 4) {
        s = std::string(4 - n, '0') + s;
    }

    std::cout << s << std::endl;

    return 0;
}
