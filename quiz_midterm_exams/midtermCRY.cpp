// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <map>
// #include <set>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     map <string, int> tel;
//     for (int i = 0; i < n; i++)
//     {
//         string number;
//         cin >> number;
//         ++tel[number];
//     }
    
//     int count = 0;
//     auto it = tel.begin();
//     while (it != tel.end())
//     {
//         if (it->second == 3) { ++count; }
//         ++it;
//     }
    
//     cout << count;
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(') { ++count; }
        else if (s[i] == ')') { --count; }

        if (count < 0) {
            cout << "NO";
            return 0;
        }
    }

    if (count != 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}