#include <iostream>
#include <unordered_map>

int main() {
    int x[3], y[3];
    
    for (int i = 0; i < 3; ++i)
        std::cin >> x[i] >> y[i];

    std::unordered_map<int, int> countX, countY;

    for (int i = 0; i < 3; ++i) {
        countX[x[i]]++;
        countY[y[i]]++;
    }

    int x0, y0;
    for (int i = 0; i < 3; ++i) {
        if (countX[x[i]] == 1) x0 = x[i];
        if (countY[y[i]] == 1) y0 = y[i];
    }

    std::cout << x0 << " " << y0 << std::endl;

    return 0;
}
