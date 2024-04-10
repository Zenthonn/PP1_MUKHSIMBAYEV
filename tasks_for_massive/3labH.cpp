#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int sum_of_elements = 0;
    for (int i = l - 1; i < r; ++i) {
        sum_of_elements += arr[i];
    } 
    
     cout << sum_of_elements << endl;
    return 0;
}