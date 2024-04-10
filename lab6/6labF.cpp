#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    int n;
    cin>>s1;
    cin>>n;
    int cnt=0;
    for(int i=0;i<s1.size();i++){
    if(isdigit(s1[i])==true){
     cnt++;
    }
    }
    //cout<<cnt<<endl;
    if(cnt<n){
    cout<<"NO";
    return 0;
    }
    else{
        cout<<"YES";
    }
    
}