abc095_a.cpp
#########################################
#########################################
#########################################
#########################################
#########################################
#########################################
#########################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int z=0;
  string a,b,c,d,e;
  cin>>a;
  for(int i=0;i<3;i++){
    if(a[i]=='o')z++;
  }
cout<<700+z*100<<endl;
}
#########################################
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int cnt = 700;
  for (int i = 0; i < 3; i++){
    if (s[i] == 'o') cnt += 100;
  }
  cout << cnt << "\n";
}
#########################################
#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main()
{
    cin>>s;
    t=0;
    for (int i = 0; i < 3; ++i) {
       if (s.at(i)=='o') {
           t=t+1;
       } 
    } 
    cout<<700+100*t<<endl;
}
#########################################
