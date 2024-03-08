//abc087_a.cpp
###################################
###################################
###################################
###################################
###################################
###################################
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<(a-b)%c;
	return 0;
###################################
#include <iostream>
using namespace std;
int main() {
	int x, a, b, s,bc,bq;
	cin >> x >> a >>b;
    bc=(x-a)/b;
	bq=b*bc;
	s=x-a-bq;
	cout<<s;
	return 0;
}
###################################
#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,a,b;
	cin>>x>>a>>b;
	x-=a;
	if(x<=0){
		cout<<0;
		return 0;
	}
	while(x>=b){
		x-=b;
	}
	cout<<x;
	return 0;
}

###################################
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,a,b;
  cin >> x >> a >> b;
  cout<<(x-a)%b;
}
###################################
