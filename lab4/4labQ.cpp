#include <iostream>
using namespace std;
int main (){
    int n;cin>>n;
    int a[n][n];
    int l=n-1; int r=n-1;
    for (int i=0; i<n; i++){
        for (int j=0; j<2*n-1; j++){
            if (j<=r && j>=l) cout<<"*";
            else cout<<".";
        }
        l--; r++;
        cout<<endl;
    }
}