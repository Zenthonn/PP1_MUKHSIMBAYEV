#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int d[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++) {
        d[i] = abs(b[i] - a[i]);
    }
    for(int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }


    return 0;
}