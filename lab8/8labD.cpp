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

    int k;
    cin >> k;
    v.erase(v.begin() + k);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}