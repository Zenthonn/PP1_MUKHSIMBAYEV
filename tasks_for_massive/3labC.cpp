#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
         cin >> arr[i];
    }

    int maxValue = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    cout << maxValue << endl;

    return 0;
}
