#include <iostream>
using namespace std; 
int main (){
    int n;cin>>n;
    int a[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==0 && j==0){
                cout<<0<<" ";
            }
            if (i==0 && j!=0){
                cout<<j<<" ";
            }
            if (i!=0 && j==0){
                cout<<i<<" ";
            }
            if (i>0 && j>0){
                cout<<i*j<<" ";
            }
        }
        cout<<endl;
    }
}