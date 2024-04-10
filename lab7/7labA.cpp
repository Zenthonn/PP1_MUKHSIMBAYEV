#include <iostream>
using namespace std;
int recursive_degree(int m, int n) {
    n = 2;
    if(m == 0)
    return 1;
    else
    return n * recursive_degree(m - 1, n);

}
int main () {
    int n = 2, m;
    cin >> m;
    
    cout << recursive_degree(m, n);
}


    
    


    
