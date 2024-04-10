#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Find the maximum element in the array
    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Find the minimum element in the array
    int minElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i]< minElement) {
            minElement = arr[i];
        }
    }
    // Replace all occurrences of the maximum element with the minimum element
    for (int i = 0; i < n; ++i) {
        if (arr[i] == maxElement) {
            arr[i] = minElement;
        }
    }
    // Print the updated array
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}





