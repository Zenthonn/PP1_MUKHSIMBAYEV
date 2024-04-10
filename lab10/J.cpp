#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector <int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    rotate(vec.begin(), vec.begin()+m, vec.end());
    reverse(vec.begin(), vec.end());
    
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}   