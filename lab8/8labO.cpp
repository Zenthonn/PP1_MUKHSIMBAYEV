#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    set <char> myset;
    for(int i = 0; i < s.size(); i++) {
        myset.insert(s[i]);
    }

    cout << myset.size() << endl;
    for(auto letter : myset) {
        cout << letter << " ";
    }
}