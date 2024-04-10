#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int rec_value(int n) {
    int sum////**3=0;
   if(n==0) {
     return sum;
    }
    sum(n % 10)/2;
    return sum+rec(n/10);
}
int main() {
    int n;
    cin >> n;
    cout << rec(n);
}
