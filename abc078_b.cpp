abc078_b.cpp
#################################
#################################
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a-c)/(b+c);
    return 0;
}
#################################
#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll X, Y, Z; cin>>X>>Y>>Z;
    ll usado ;
    usado = X/(Y+Z);
    if((usado*(Y+Z) + Z) <= X ){
        cout<<usado;
    }
    else{
        cout<<(usado-1);
    }
    return 0;
}
#################################
#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>x>>y>>z;
	cout<<(x-z)/(y+z)<<'\n';
}
#################################
#include <iostream>
using namespace std;
    int main() {
    int x,y,z,ans;
    cin >>x>>y>>z;
    ans=(x-z)/(y+z);
    cout <<ans;
}
#################################
[python]
X,Y,Z=map(int,input().split())
print((X-Z)//(Y+Z))
#################################
