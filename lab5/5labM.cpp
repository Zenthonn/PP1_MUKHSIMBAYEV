// дана строка s,символ x и номер n,количество символов в строке  s,которая равно n,рандомную букву выбираем
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    char x;
    cin >> s >> x;
    int n;
    cin >> n;
    if(count(s.begin(), s.end(), x) == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}