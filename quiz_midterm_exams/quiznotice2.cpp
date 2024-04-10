#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int max = -1e9;
    int min = 1e9;

    for(int i = 0; i < n; i++) {
        if(v[i] > max) {
            max = v[i];
        }
    }

    int difference;

    for(int i = 0; i < n; i++) {
        if(v[i] < min) {
            min = v[i];
        }
    }

    difference = max - min;
    cout << difference << " ";
}