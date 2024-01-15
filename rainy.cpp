//abc175_a rainy.cpp

#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::string A;
    std::cin >> A;
    std::vector<int> DP = {0, 0, 0, 0};
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == 'R') {
            DP[i + 1] = DP[i] + 1;
        }
    }
    std::cout << *std::max_element(DP.begin(), DP.end()) << std::endl;
    return 0;
}
