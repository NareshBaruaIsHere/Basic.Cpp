#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter Num: ";
    cin >> n;
    bool isPrime = true;

    for( int i=2; i<=n-1; i++) {
        if(n % i == 0 ) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "number is Prime" << endl;
    } else {
        cout << "number is Not Prime" << endl;
    }
    
    return 0;
}