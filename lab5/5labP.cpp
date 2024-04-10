#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(auto c : s) {
        if(c == 'z') cout << "a";
        else {
            c = (int) c + 1;
            cout << c;
        }
    }
}