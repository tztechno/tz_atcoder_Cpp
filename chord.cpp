
#include <iostream>
#include <vector>
#include <algorithm> // Need to include this for the find function
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> name = {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"}; // Use double quotes for string literals
    if (find(name.begin(), name.end(), s) != name.end()){ // Use std::find to check if s is in name
        cout << "Yes" << endl;  
    }
    else {
        cout << "No" << endl;    
    }
    return 0;
}
