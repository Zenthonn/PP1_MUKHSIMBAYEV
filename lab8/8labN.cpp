#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> myvector(n);
    for(int i = 0; i < n; i++) {
        cin >> myvector[i];
    }

    set <int> myset;
    for(int i = 0; i < n; i++) {
        if(myvector[i] % 2 != 0) {
            myset.insert(myvector[i]);
        }
    }
    for(auto cnt : myset) {
        cout << cnt << " ";
    }
}