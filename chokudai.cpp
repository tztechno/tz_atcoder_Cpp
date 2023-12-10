#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
  
// a,b=map(int,input().split())
    int a, b;
    std::cin >> a >> b;
  
// S[b-1],S[a-1]=S[a-1],S[b-1]
    std::swap(S[a-1], S[b-1]);
  
    std::cout << S << std::endl;

    return 0;
}

##########################


#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int a, b;
    std::cin >> a >> b;

    // Ensure a and b are valid indices
    if (a > 0 && b > 0 && a <= S.length() && b <= S.length()) {
        // Swap characters at indices a-1 and b-1
        std::swap(S[a - 1], S[b - 1]);

        // Print the modified string
        std::cout << S << std::endl;
    } else {
        std::cout << "Invalid indices." << std::endl;
    }

    return 0;
}
