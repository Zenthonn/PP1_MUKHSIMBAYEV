#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    for(int i=0;i<=s1.size();i++){
        if(i%2==0 && s1[i]>96 && s1[i]<123){
            s1[i]=(int)s1[i]-32;
             s1[i]=(char)s1[i];
        }
        //cout<<(char)s1[i];
    }
    cout<<s1;
}