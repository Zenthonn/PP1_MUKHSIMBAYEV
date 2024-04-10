// almost palindrom,if we add one letter will be palindrom
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s,t;
    cin >> s;
    s += s[0];
    t = s;
    reverse (s.begin(), s.end());
    if(s == t) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}