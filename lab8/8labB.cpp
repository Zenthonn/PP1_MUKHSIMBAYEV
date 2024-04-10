#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void f(vector <int> v) {
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
} 
int main() {
    int n, x;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    f(v);
    
}