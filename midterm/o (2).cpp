#include <iostream>
using namespace std;
int main(){
    int n,m,sum;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        cout<<sum/m<<" ";
        sum=0;
    }
}