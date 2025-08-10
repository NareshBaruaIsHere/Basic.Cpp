#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << &a << "\n"; // for the address
    cout << *(&a) << "\n"; // for the value of the variable
    cout << *ptr << "\n"; // for the value of the variable
    
    *ptr = 20; //changing the value
    cout << a << "\n";
    return 0;
}