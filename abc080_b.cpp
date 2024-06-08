abc080_b.cpp
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
[after, AC]
#include <iostream>
#include <string>
int main() {
    int M = 0;
    std::string X;
    std::cin >> X;
    for (size_t i = 0; i < X.size(); ++i) {
        char x = X[i];
        M += x - '0'; // Convert character to integer
    }
    int num = std::stoi(X); // Convert string to integer
    if (num % M == 0) {
        std::cout << "Yes";      
    } else {
        std::cout << "No";      
    }
    return 0;
}
##########################################
[before, WA]
#include <iostream>
#include <vector>
int main() {
    int M=0;
    str X:
    std::cin >> X;
    for (int i = 0; i < len(X); ++i) {
        x=X[i]
        M+=int(x)
    }
    if (int(X)%M==0 ){
      std::cout << "Yes" ;      
    }
    else {
      std::cout << "No" ;      
    }
    return 0;
}
##########################################
[python]
X=str(input())
M=0
for x in list(X):
  M+=int(x)
if int(X)%M==0:
  print('Yes')
else:
  print('No')
##########################################
