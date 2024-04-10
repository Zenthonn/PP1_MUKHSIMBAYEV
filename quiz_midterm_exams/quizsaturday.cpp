// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     int cnt = 0;
//     int cnt1 = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] >= 'a' && s[i] <= 'z') {
//             cnt++;
//         } else if(s[i] >= 'A' && s[i] <= 'Z') {
//             cnt1++;
//         }
//     }

//     cout << cnt << " " << cnt1;

// }

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double n, m;
    cin >> n >> m;
    double c = sqrt(pow(n, 2) + pow(m, 2));
    cout << fixed << setprecision(4);
    cout << c;

}