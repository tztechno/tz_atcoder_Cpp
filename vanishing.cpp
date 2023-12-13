#include <iostream>

int main() {
    int V,T,S,D;
    std::cin >> V>> T>> S>> D;
    
    if (V*T<=D && D<=V*S) {
        std::cout << "No"<< std::endl;
        }
    else{
        std::cout << "Yes"<< std::endl;
        }
    return 0;
}
