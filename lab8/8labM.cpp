#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector <int> v(n);
    set <int> set;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        set.insert(v[i]);
    }
    int sum = 0;
    set <int>:: iterator it = set.begin();
    while(it!=set.end()) {
        sum =sum+*it;
        it++;
    }
    cout << sum;

}