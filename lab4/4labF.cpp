#include <iostream>
#include <limits.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int max=INT_MIN;
    int x, y;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            if(max < a[i][j]){
                max = a[i][j];
                x = j;
                y = i;
            }
        }
    }
    cout << y + 1 << " " << x + 1;

    return 0;
}