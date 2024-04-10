#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> k;
    int sum = 0;
    sort(v.begin(), v.end());
    for(int i = n - k; i < n; i++) {
        sum += v[i];
    }
    cout << sum;
}   