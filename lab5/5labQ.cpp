#include <iostream>
#include <string>
using namespace std;
int main () {
    string s, d;
    cin >> s >> d;
    d.erase(d.begin(), d.end() - s.size());
    if (d == s) cout << "YES";
    else cout << "NO";
}