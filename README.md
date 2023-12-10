# tz_atcoder_cpp
  
#include <iostream>  
int main() {  
    int N;  
    std::cin >> N;  
    std::cout << N << std::endl;      
    return 0;  
}  



  
// a,b=map(int,input().split())  
    int a, b;  
    std::cin >> a >> b;  
   
// S[b-1],S[a-1]=S[a-1],S[b-1]  
    std::swap(S[a - 1], S[b - 1]);  
   
//  char ans=''.join(S)      
    std::cout << S << std::endl;  
    
