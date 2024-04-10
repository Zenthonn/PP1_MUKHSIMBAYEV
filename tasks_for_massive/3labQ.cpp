#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x) {
    if (x < 2) {
        return false; // Numbers less than 2 are not prime
    }
    
    int sqrt_x = sqrt(x);
    for (int i = 2; i <= sqrt_x; ++i) {
        if (x % i == 0) {
            return false; // x is divisible by i, not prime
        }
    }
    
    return true; // x is prime
}

int main() {
    // Input
    int x;
    cin >> x;

    // Check if x is prime using the isPrime function
    if (isPrime(x)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

