#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Reverse the elements in the specified interval [l, r]
    for (int i = l - 1, j = r - 1; i < j; ++i, --j) {
        swap(arr[i], arr[j]);
    }

    // Output the modified array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}





