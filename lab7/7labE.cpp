#include <iostream>
using namespace std;
void rec_degree(int n) {
    if(n == 1) {
        cout << "Yes";
        return;
    }
    int cnt = 0;
    if(n % 2 == 1) {
        rec_degree(n / 3);
        cnt++;

    } else {
        cout << "No";
    }
    cout << cnt;
}

int main() {
    int n;
    cin >> n;
    rec_degree(n);

}


