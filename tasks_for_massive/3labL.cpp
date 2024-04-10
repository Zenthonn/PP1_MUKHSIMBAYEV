#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    // Add remaining elements from both arrays
    while (i < a.size()) {
        merged.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        merged.push_back(b[j]);
        j++;
    }

    return merged;
}
int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    vector<int> mergedArray = mergeArrays(a, b);

    for (int i = 0; i < mergedArray.size(); ++i) {
        cout << mergedArray[i] << " ";
    }

    cout << endl;

    return 0;
}
