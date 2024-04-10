#include <iostream>
using namespace std;
int   rec_sum(string s, int i, int sum) {

    if(s.size() == 1) {
        return sum;
    }
    sum += s[i] - '0';
    return rec_sum(s, i + 1, sum);
}

int main() {
    string s;
    cin >> s;
    int i = 0, sum = 0;
    cout << rec_sum(s, i, sum);
}