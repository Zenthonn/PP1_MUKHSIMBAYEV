#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            std::cout << arr[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
