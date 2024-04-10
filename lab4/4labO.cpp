#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main (){
    int n;cin >> n;
    int arr[n][n];
    int max1 = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i == j) max1 = max(max1, arr[i][j]); 
        }
    }
    for (int i = 0; i < n; i++){
        if (max1 == arr[i][i]){
            cout << "Maximum element is: " << max1 << " with coordinates: " << i + 1 << ";" << i + 1;
            return 0;
        }
    }
}