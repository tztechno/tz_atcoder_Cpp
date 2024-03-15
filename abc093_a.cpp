//abc093_a.cpp
####################################
####################################
####################################
####################################
####################################
####################################
####################################
#include<iostream>
#include<algorithm>
std::string s;
int main(){
	std::cin>>s;
	std::sort(s.begin(),s.end());
	if(s=="abc")puts("Yes");
	else puts("No");
} 
####################################
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
    if(s == "abc"||s == "acb"||s == "bac"||s == "bca"||s == "cab"||s == "cba")
	    	cout << "Yes" << endl;
	else
    	cout << "No" << endl;
	return 0;
}
####################################
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.find("a") != string::npos && S.find("b") != string::npos && S.find("c") != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
####################################
