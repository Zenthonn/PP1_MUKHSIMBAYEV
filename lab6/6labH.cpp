#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        if(s1[i]%2!=0){
            cout<<"Not valid";
            return 0;
        }
    }
    cout<<"Valid";
}