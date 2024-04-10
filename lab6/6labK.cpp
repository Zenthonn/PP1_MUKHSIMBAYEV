#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int b=0,n=s1.size();
    for(int i=0;i<n;i++){
        s1[i]=s1[i]-48;
        b=b+s1[i];
    }
    cout<<b;
}