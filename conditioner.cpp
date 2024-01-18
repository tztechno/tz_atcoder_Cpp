//abc174_a conditioner.cpp

####################################
####################################
#include <iostream>
#include <string> 

int main() {
    int X;
    std::cin >> X;
    if (X>=30) {
    std::cout << "Yes" << std::endl;       
    } else {
    std::cout << "No" << std::endl;        
    }
    return 0; 
}
####################################
#include <iostream>
#include <vector>
#include <string> 

int main() {
    int X;
    std::cin >> X;
    std::vector<std::string> ANS = {"No", "Yes"};  
    int judge = int(X >= 30);
    std::cout << ANS[judge] << std::endl;
    return 0; 
}
####################################
