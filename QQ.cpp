#include <iostream>
#include <vector>

int main() {
    std::vector<int> A(3);
    int ans = A[0] * A[2];
    std::cout << ans << std::endl;
    return 0;
}
