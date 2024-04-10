#include <iostream>
//#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int arr ;

    for (int i = 0; i < n; ++i) {
         cin >> arr[i];
    }

    int positiveCount = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        }
    }

    cout << positiveCount << endl;

    return 0;
}


