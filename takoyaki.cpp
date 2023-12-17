
#include <iostream>
#include <unordered_map>

int main() {
    int N,X,T;
    std::cin >> N>>X>>T;
    int t=N/X;
    if (N%X==0) {
        std::cout << t*T << std::endl;      
        }
    else {
        std::cout <<(t+1)*T << std::endl;        
        }
    return 0;
}

#############################################

#include <iostream>
#include <cmath>

int main() {
    int N, X, T;
    std::cin >> N >> X >> T;
    int t = (N + X - 1) / X;
    std::cout << t * T << std::endl;
    return 0;
}
