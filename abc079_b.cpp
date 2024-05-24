abc079_b.cpp
##########################################
##########################################
##########################################
#include <bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for (int i = (s); i < (int)(n); i++)

int main(){
  int N;
  cin >> N;
  vector<long long> L(87);
  
  L.at(0) = 2LL;
  L.at(1) = 1LL;
  
  rep(i,2,N + 1){
    L.at(i) = L.at(i - 1) + L.at(i - 2);
  }
  cout << L.at(N) << endl;
  return 0;
}
##########################################
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> L(N+1);

  L.at(0) = 2;
  L.at(1) = 1;
  for(int i =2; i<=N; i++){
    L.at(i)= L.at(i-1)+L.at(i-2);

  }

  cout << L.at(N) << endl;
}
##########################################
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int64_t> luca(N+1);

    luca.at(0) = 2;
    luca.at(1) = 1;
    for(int i = 2; i <= N; i++){
        luca.at(i) = luca.at(i-2)+luca.at(i-1);
    }

    cout << luca.at(N) << endl;
}
##########################################
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int64_t> vec(87);
  int N;
  cin >> N;
  vec.at(0) = 2LL;
  vec.at(1) = 1LL;
  for (int i = 2;i<87;i++){
      vec.at(i) = vec.at(i-1)+vec.at(i-2);
  }
  cout << vec.at(N) << endl;
}
##########################################
[my AC]
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<long long> A(N+1);
    A[0] = 2;
    A[1] = 1;
    for (int i = 2; i < N+1; ++i) {
        A[i] = A[i-2] + A[i-1];
    }
    std::cout << A[N] << std::endl;
    return 0;
}
##########################################
[my WA]
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> A(N+1);
    A[0] = 2;
    A[1] = 1;
    for (int i = 2; i < N+1; ++i) {
      A[i] = A[i-2] + A[i-1];
    }
    std::cout << A[N] << std::endl;
    std::cout << std::endl;
    return 0;
}
##########################################
[python]
N=int(input())
L=[2,1]
for i in range(N-1):
    L+=[L[-2]+L[-1]]
print(L[-1])
##########################################
