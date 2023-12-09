#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    string S;
    cin >> S;

    // Using an unordered_set to store unique characters
    unordered_set<char> ss;

    for (char s : S) {
        ss.insert(s);
    }

    // Iterating through unique characters and finding the first non-repeating character
    for (char s : ss) {
        if (count(S.begin(), S.end(), s) == 1) {
            cout << s << endl;
            return 0;
        }
    }

    // If no non-repeating character is found, print -1
    cout << "-1" << endl;
    return 0;
}
