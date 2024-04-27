abc076_b.cpp
##############################################
##############################################
##############################################
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a,b,min = 1;

    for(int i = 0; i < n;i++){
        a = min * 2;
        b = min + k;
        if(a > b) min = b;
        else min = a;
    }
    cout << min << endl;
}
##############################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,sum;
  cin >> N >> K;
  sum=1;
  for (int i=0;i<N;i++){
    if(sum*2>sum+K)
      sum+=K;
    else
      sum*=2;
  }
  cout << sum << endl;
}
##############################################
#include<iostream>
#include <algorithm> 
int main()
{
	int n,k,a=1;
	std::cin>>n;
	std::cin>>k;
    for(int i=0;i<n;i++){    
      a=std::min(a*2,a+k);
    }  
	std::cout<<a;
 } 
##############################################
[python]
N=int(input())
K=int(input())
A=1
for i in range(N):
  A=min(A*2,A+K)
print(A)
##############################################
