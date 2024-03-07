//abc086_a.cpp
###################################
using namespace std;
string ans;
###################################
###################################
###################################
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  cin >> a >> b;
  if(a*b%2==1) cout<<"Odd";
  else cout<<"Even";
}
###################################
#include <bits/stdc++.h>	
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b;
  c=a%2;
  d=b%2;
  if((c==1)&&(d==1)){
    cout<<"Odd"<<endl;
  }
  else{
    cout<<"Even"<<endl;
  }
 }
###################################
#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  int mult = a * b;
  if (mult % 2 == 0) { 
    cout << "Even" << endl;
  }  else {
    cout << "Odd" << endl;
  }
}
###################################
#include<iostream>
using namespace std;
int main() {
    int a, b;
    string ans;
    cin >> a >> b;
    if ((a * b) % 2 == 0) {
        ans = "Even";
    } else {
        ans = "Odd";
    }
    cout << ans << endl;
    return 0;
}
###################################
