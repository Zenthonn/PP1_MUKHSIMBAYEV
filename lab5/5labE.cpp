#include <iostream>
#include <string>
using namespace std;
int main() {
  string N; cin>>N;
  int sum=0;
  int sum1=0, sum2=0;
  for (int i=0; i<N.size(); i++){
    //N[i]-'0';
    if (i%2==0){
        sum1+=N[i]-'0';
    }
    else{
        sum2+=N[i]-'0';
    }
  }
     if (sum1==sum2){
        cout<<"YES";
        return 0;
    }
    else {
        cout<<"NO";
        return 0;
    }
  }