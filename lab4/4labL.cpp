#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n,m,sum = 0, it, jt;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    for(int j = 0; j < m; j++) {
        int min = INT_MAX;
        for(int i = 0; i < n; i++){
            if(min > a[i][j]) {
                min = a[i][j];
                it = i;
                jt = j;
            }
        }
        cout << it + 1 << ";" << jt + 1 << " " << endl;
        sum += min;
    }
    cout << "\n Their sum: \n" << sum; 




}
    