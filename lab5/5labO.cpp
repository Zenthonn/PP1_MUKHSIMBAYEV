#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    char maxi = ' ';
    for(auto c : s)  {
        if (maxi < c) {
            maxi = c;
        }
    } 
    cout << maxi;+

    return 0;
}
