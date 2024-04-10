#include <iostream>
#include <vector>

using namespace std;

vector<int> removeDuplicates(vector<int>& nums) {
    vector<int> uniqueElements;
    
    for (int i = 0; i < nums.size(); ++i) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            uniqueElements.push_back(nums[i]);
        }
    }
    
    return uniqueElements;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    vector<int> uniqueArr = removeDuplicates(arr);
    
    for (int i = 0; i < uniqueArr.size(); ++i) {
        cout << uniqueArr[i] << " ";
    }
    
    cout << endl;

    return 0;
}
