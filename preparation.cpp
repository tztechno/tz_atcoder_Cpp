#include <iostream>
#include <algorithm>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int A[] = {a, b, c, d};

    auto minElement = std::min_element(std::begin(A), std::end(A));
    std::cout << *minElement << std::endl;

    return 0;
}
