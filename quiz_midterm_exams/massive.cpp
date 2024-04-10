// // #include <iostream>
// // using namespace std;
// // int main() {

// //     int n;
// //     cin >> n;
// //     int a[n];
// //     for(int i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }
// //     for(int i = 0; i < n; i++) {
// //         if(a[i] % 2 == 0) {
// //             continue;
// //         }
// //         cout << a[i] << " ";
// //     }
// // }


// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int n;
// //     cin >> n;
// //     int a[n];
// //     for(int i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }
// //     int cnt = 0;
// //     int maxi = 0;

// //     for(int i = 0; i < n; i++) {
// //         if(a[i] > maxi) {
// //             maxi = a[i];
// //         }
// //     }
// //     cout << maxi;
// // }


// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int index = 0;

//     for(int i = 1; i < n; i++) {
//         if(a[i] > a[index]) {
//             index = i;
//         }
//     }
//     cout << index + 1 << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum;


}