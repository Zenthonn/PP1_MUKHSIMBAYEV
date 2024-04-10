#include <bits/stdc++.h>
using namespace std;
long long rec(long long sum){
    int n;
    cin>>n;
    sum+=n;
    if(n = 0){
        return sum;
        
    }
    return rec(sum); 
}

int main(){
    long long sum = 0;
    cout << rec(sum);
}