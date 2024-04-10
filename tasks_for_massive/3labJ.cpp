#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid; // Target found, return the index
        } else if (nums[mid] < target) {
            left = mid + 1; // Adjust the left pointer
        } else {
            right = mid - 1; // Adjust the right pointer
        }
    }
    
    return left; // Target not found, return the index where it should be inserted
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int result = searchInsert(arr, m);
    
    cout << result << endl;

    return 0;
}



