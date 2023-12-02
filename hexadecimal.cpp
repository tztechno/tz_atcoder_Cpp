#include <iostream>
#include <vector>
#include <map>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> M;
    M.push_back(N / 16);
    M.push_back(N % 16);

    std::map<int, char> mapping{
        {10, 'A'},
        {11, 'B'},
        {12, 'C'},
        {13, 'D'},
        {14, 'E'},
        {15, 'F'}
    };

    std::string M2;
    for (int mi : M) {
        if (mi < 10) {
            M2 += std::to_string(mi);
        } else {
            M2 += mapping[mi];
        }
    }

    std::cout << M2 << std::endl;

    return 0;
}
