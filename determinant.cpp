#include <iostream>

int main() {
    
    int a, b, c, d;
    std::cin >> a >> b;
    std::cin >> c >> d;
    int ans = a * d - b * c;  // Added semicolon here
    std::cout << ans << std::endl;

    return 0;
}
