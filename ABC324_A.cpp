/*rainbow*/

#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int main(){
	cin>>n>>a;
	for(int i=2;i<=n;i++){
		cin>>b;
		if(a!=b){
			cout<<"No";
			return 0; 
		}
	}
	cout<<"Yes";
	return 0;
}

/* 

N=int(input())
A=list(map(int,input().split()))
if len(set(A))==1:
  print('Yes')
else:
  print('No')

*/

