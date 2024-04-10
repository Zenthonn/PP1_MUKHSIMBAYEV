#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnta = 0,cntb = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') cnta++;
        else if (s[i] >= 'A' && s[i] <= 'Z') cntb++;
    }
    cout << cnta << " " << cntb << endl;

   return 0;
}
