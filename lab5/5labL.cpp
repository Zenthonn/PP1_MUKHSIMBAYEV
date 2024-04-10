// find alphabetical order and increasing
// найти увеличение в алфавитном порядке 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s , s1;
    cin >> s;
    s1 = s;
    sort(s.begin(), s.end());
    if(s == s1) {
        cout << "YES" << endl;
    } else {
        cout << "NO";
    }
}