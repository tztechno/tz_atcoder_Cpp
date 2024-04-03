abc069_b.cpp
#########################################
int-->stringstream-->string
int number=s.length();
stringstream ss;
ss << number-2;
cout << s[0]+ss.str()+s[number-1] << endl;
#########################################
#########################################
#########################################
#########################################
#########################################
#########################################
#########################################
#include <bits/stdc++.h>
#include <math.h>
#include <cfenv>
#include <cmath>
#include <bitset>
#include <iomanip>
#include <algorithm>
#include <string>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <tuple>
#include <cassert>
#include <set>
using namespace std;
using ll = long long;
 
int main() {
 string s;
 cin >> s;
 cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
}
#########################################
// LUOGU_RID: 153488008
#include <bits/stdc++.h>
using namespace std;
int main() {
string a;
cin>>a;
cout<<a[0]<<a.size()-2<<a[a.size()-1]<<endl;
}

#########################################
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int ans=0;
	for(int i=1;i<s.size()-1;i++){
		ans++;
	}
	cout<<s[0]<<ans<<s[s.size()-1]<<endl;
return 0;
}
#########################################
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int number=s.length();
    stringstream ss;
    ss << number-2;
    cout << s[0]+ss.str()+s[number-1] << endl;
    return 0;
}
#########################################
