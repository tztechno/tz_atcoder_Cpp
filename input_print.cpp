#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cout << N << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
