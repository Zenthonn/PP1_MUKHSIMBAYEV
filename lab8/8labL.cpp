#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
int n, k;
cin >> n;
vector <int> v(n);
set <int> set;
int cnt = 0;
for(int i = 0; i < n; i++) {
    cin >> v[i];
    if(set.insert(v[i])) {
        cnt++;
    }
}
cout << cnt;
}