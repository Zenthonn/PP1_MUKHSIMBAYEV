#include <iostream>
using namespace std;
int rec_max(string s,int i,int max) {
    int a;
    if(i==s.size()) {
        cout<<max;
        return;
    }
    a=s[i]-48;
    if(max<a) {
        max=a;
    }
    rec_max(s,i + 1,max);
    
}

int main() {
    string s;
    cin>>s;
    cout<<rec_max(s,0,0);
}