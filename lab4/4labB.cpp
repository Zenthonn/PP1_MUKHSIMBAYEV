#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    int max =-INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    int min = max;
    int secondmax = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
           if((max - a[i][j])< min && (max - a[i][j] != 0)) {
            min = max - a[i][j];
            secondmax = a[i][j];
           }
        }
    }
    cout << secondmax << " ";


    return 0;




}