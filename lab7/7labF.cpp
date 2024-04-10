#include <iostream>
using namespace std;
int rec_degree(string s, int i, int cnt) {

    if(i == s.size()){
        return cnt;
    }
    if((s[i] - '0') % 2 == 0) {
        return rec_degree(s, i + 1, cnt + 1);
    } else {
        return rec_degree(s, i + 1, cnt);
    }
}
int main() {
    string s;
    int i = 0;
    int cnt = 0;
    cin >> s;
    cout << rec_degree(s, i, cnt);
}