#include <iostream>
#include <vector>
using namespace std;
bool prime(vector <int> v, int i) {
    for(int j = 2; j <v[i]; j++) {
        if(v[i] % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x, n, k, i, t;
    cin >> n;
    
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> k;
    int cnt = 0;

    for(i = 0; i < n; i++) {
        if(prime(v, i) == true && v[i] >= k) {
            cnt++;
        }
    }
    cout << cnt;
}