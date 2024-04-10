#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    vector <int> v;
    vector <int> vn;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x % 2 == 0) {
            vn.push_back(x);
        } else {
            v.push_back(x);
        }
    }
    
    for(int i = 0; i < vn.size(); i++) {
        cout << vn[i] << " ";
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";    p

    }
}