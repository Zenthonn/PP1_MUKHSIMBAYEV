#include <iostream>
#include <string>
using namespace std;
int a[10];
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++) {
        a[s[i] - '0']++;
    }
    int g = -1;
    for(int i = 0; i < 10; i++) {
        if(a[i] > 0 && g == -1) {
            g = a[i];
        }
        if(a[i] != g && a[i] != 0 && g != -1){
            cout << "NO";
            return 0;
        }     
     }
     cout << "YES"; 
}
    
    
