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


//////////////////////////////////////

#include <iostream>
#include <vector>
#include <map>

int main() {
    // Read input from the user
    int N;
    std::cin >> N;

    // Calculate the quotient and remainder
    std::vector<int> M{N / 16, N % 16};

    // Define the mapping for hex digits
    std::map<int, char> mapping{
        {0, '0'}, {1, '1'}, {2, '2'}, {3, '3'},
        {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'},
        {8, '8'}, {9, '9'}, {10, 'A'}, {11, 'B'},
        {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}
    };

    // Convert to hex representation
    std::string M2;
    for (int mi : M) {
        M2 += mapping[mi];
    }

    // Print the result
    std::cout << M2 << std::endl;

    return 0;
}

