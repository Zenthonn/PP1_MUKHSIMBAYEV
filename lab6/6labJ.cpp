#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   int a[4];
   int b;
   for(int i=0;i<4;i++){
    cin>>a[i];
   }
   b=-1000000;
   for(int i=0;i<4;i++){
    if(b<a[i])
    b=a[i];
    
   }
   cout<<b;
}