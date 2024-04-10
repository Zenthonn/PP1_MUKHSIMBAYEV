// #include <iostream>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     string s1 = "";
//     for(int i = s.size()-1; i >= 0; i--) {
//         s1 += s[i];
//     }
//     if (s == s1) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }


// }
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s,s1;
    cin >> s;
    s1 = s;
    reverse(s1.begin(),s1.end());
    if(s1 == s) cout << "YES";
    else cout << "NO";

    return 0;
}
