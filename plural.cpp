
#include <iostream>
#include <cstring>

int main() {
    char S[100]; 
    std::cin >> S;

    int length = strlen(S);

    if (S[length - 1] == 's') {
        std::cout << S << "es" << std::endl;
    } else {
        std::cout << S << "s" << std::endl;
    }

    return 0;
}
