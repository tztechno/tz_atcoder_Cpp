abc081_b.cpp
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
std::vector<int> B = A; に変更。
exit() の代わりに return 0; を使用。

[after fix: AC]
#include <iostream>
#include <vector>

int main() {
    int N, bj;
    std::cin >> N;
    std::vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    
    std::vector<int> B = A;
    
    for (int i = 0; i < N * 10; ++i) {
        for (int j = 0; j < N; ++j) {
            bj = B[j];
            if (bj % 2 == 0) {
                B[j] = bj / 2;
            } else {
                std::cout << i << std::endl;
                return 0;  
            }
        }
    }
    
    return 0;
}

##########################################
[before fix]
#include <iostream>
#include <vector>
int main() {
    int N,bj;
    std::cin >> N;
    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    B=A
    for (int i=0; i<N*10; ++i) {
      for (int j=0; j<N; ++j) {
        bj=B[j]
        if (bj%2==0) {
          B[j]=bj//2            
        }
        else {
          std::cout << i << std::endl;
          exit()                
        }
      }
    }
    return 0;
}
##########################################
[python]
N=int(input())
A=list(map(int,input().split()))
B=A
for i in range(N*10):
  for j in range(N):
    bj=B[j]
    if bj%2==0:
        B[j]=bj//2
    else:
        print(i)
        exit()
##########################################
