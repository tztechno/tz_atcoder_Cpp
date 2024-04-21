abc074_b.cpp
#######################################
#######################################
#######################################
#######################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k,sum=0;
  cin >>n>>k;
  for(int i=0;i<n;i++){
    int x;
    cin >> x;
    if(k-x<x){
      sum+=k-x;
    }else{
      sum+=x;
    }
  }
  cout << sum*2 << endl;
}
#######################################
#include <iostream>

int main(){
    int n, k, x;
    int total = 0;
    std::cin >> n >> k;

    for(int i = 0; i<n; i++){
        std::cin >> x;
        if(x >= k - x)
            total += (k-x)*2;
        else
            total += (x*2);
    }
    std::cout << total << std::endl;
    return 0;
}
#######################################
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin>>n>>k;
    int A=0;
        for(int i=0;i<n;i++){
        int xi;
        cin>>xi;
        if(xi>k){
            A +=(xi-k)*2;
        }else if(k-xi>xi){
            A +=xi*2;
        }else{
            A +=(k-xi)*2;
        }
    }cout<<A<<endl;
    return 0;
} 
#######################################
#include <iostream>
#include <vector>

int main() {
    int N,K,S;
    std::cin >> N;
    std::cin >> K;
    std::vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    S=0;
    for (int i = 0; i < N; ++i) {
    S+=std::min(A[i],K-A[i])*2;
    }
    std::cout << S << std::endl;
    return 0;
}
#######################################
#include <iostream>
#include <vector>

int main() {
    int N,K,S;
    std::cin >> N;
    std::cin >> K;
    std::vector<int> A(N);
    
    S=0;    
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
        S+=std::min(A[i],K-A[i])*2;      
    }

    std::cout << S << std::endl;
    return 0;
}
#######################################
