abc363_c.cpp
#################################################
[AC]
#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

bool isNonPalindromic(const string& s, int k) {
    for (int i = 0; i <= s.length() - k; ++i) {
        string substring = s.substr(i, k);
        string reversedSubstring = string(substring.rbegin(), substring.rend());
        if (substring == reversedSubstring) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    set<string> uniquePermutations;
    sort(S.begin(), S.end());

    do {
        uniquePermutations.insert(S);
    } while (next_permutation(S.begin(), S.end()));

    int count = 0;
    for (const string& perm : uniquePermutations) {
        if (isNonPalindromic(perm, K)) {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}
