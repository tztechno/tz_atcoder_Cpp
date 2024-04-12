abc072_b.cpp
######################################
######################################
######################################
######################################
######################################
######################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  int n=s.length();
  
  for(int i=0;i<(n+1)/2;i++){cout<<s[i*2];}
  cout<<endl;}
######################################
#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

template<class T> inline bool chmax(T& a, const T& b) { if (a < b) { a = b; return true; } else return false; }

int main() {

    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;cin>>s;
    rep(i,s.size()) if(i%2==0) cout << s[i];
    cout << endl;

    return 0;
}
######################################
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin >> s;
  string ans = "";
  for (int i = 0; i < (int)s.size(); i++) {
    if (i % 2 == 0) {
      ans += s[i];
    }
  }
  cout << ans << "\n";

  return 0;
}
######################################
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  
  string t = "";
  for (int i = 0; i < s.size(); i++){
    if(i%2 == 0){
        t.push_back(s[i]);
    }
  }
  cout << t << endl;
}
######################################
[my ans]
#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    std::cin >> S;

    string A="";
    for (int i=0; i<S.length(); i+= 2) {
        A+=S[i];
    }
    std::cout << A << std::endl;
    return 0;
}
######################################
