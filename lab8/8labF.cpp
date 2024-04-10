#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m, k;
    cin >> m >> k;

    for(int i = 0; i < n + 1; i++) {
        if(i == m) {
            v.insert(v.begin() + i, k);
        }
        cout << v[i] << " ";
    }
     
}