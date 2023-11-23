#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> name = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    vector<int> days = {5, 4, 3, 2, 1};

    unordered_map<string, int> mapping;

    for (size_t i = 0; i < name.size(); ++i) {
        mapping[name[i]] = days[i];
    }

    cout << mapping[s] << endl;

    return 0;
}
