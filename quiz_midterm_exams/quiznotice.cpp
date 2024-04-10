// // // #include <iostream>
// // // #include <string>
// // // using namespace std;
// // // bool n(string s) {
// // //     bool flag = false;
// // //     for(int i = 0; i < s.size(); i++) {
// // //         if(s[i] >= '0' && s[i] <= '9'){
// // //             return false;
// // //         }
// // //     }
// // //     return true;
// // // }

// // // int main() {
// // //     string s;
// // //     string a = " ";
// // //     getline(cin, s);
// // //     for(int i = 0; i < s.size(); i++){
// // //         if(s[i] == ' '){
// // //             if(n(a)){
// // //                 cout << a << endl;
// // //             }
// // //             a = " ";
// // //         } else {
// // //             a += s[i];
// // //         }
// // //     }
// // //     if(n(a)){
// // //         cout << a << endl;
// // //     }
// // // }



// // #include <iostream>
// // #include <string>
// // using namespace std;
// // bool n(string s){
// //     bool flag = false;
// //     for(int i = 0; i < s.size(); i++) {
// //         if(s[i] >= '0' && s[i] <= '9'){
// //             return false;
// //         }
// //     }
// //     return true;
// // }

// // int main() {
// //     string s;
// //     getline(cin, s);
// //     string a = " ";
// //     for(int i = 0; i < s.size(); i++){
// //         if(s[i] == ' '){
// //             if(n(a)){
// //                 cout << a << endl;
// //             }
// //             a = " ";
// //         } else {
// //             a += s[i];
// //         }
// //     }
// //     if(n(a)){
// //         cout << a << endl;
// //     }
// // }



// #include <iostream>
// using namespace std;
// int gcd(int a, int b){
//     while(b > 0){
//         a %= b;
//         swap(a, b);
//     }
//     return a;
// }

// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     int x = -1;
//     for(int i = 0; i < n; i++){
//         for(int k = i + 1; k < n; k++) {
//             if(gcd(a[i], a[k] > x)) {
//                 x = gcd(a[i], a[k]);
//             }
//         }
//     }
//     cout << x << endl;

// }


#include <iostream>
#include <string>
using namespace std;
int main() {
    char a;
    string s;
    cin >> a >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == a){
            continue;
        } else {
            cout << s[i];
        }
    }
}