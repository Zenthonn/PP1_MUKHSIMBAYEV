#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int maxi = -1e9;
    for(int i = 0; i < n; i++) {
        if(v[i] > maxi) {
            maxi = v[i];
        }
    }

    int min = 1e9;
    for(int i = 0; i < n; i++) {
        if(v[i] < min) {
            min = v[i];
        }
    }
    
    k = maxi - min;
    cout << k << " ";

}