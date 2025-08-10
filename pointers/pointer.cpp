#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a = 10;
    int *ptr = &a;
    
    // float pi = 3.14;
    // float *ptr2 = &pi;

    int **pptr = &ptr;
    cout << &ptr << " = " << pptr << "\n";
    // cout << sizeof(ptr) << "\n";
    // cout << sizeof(ptr2) << "\n";
    // cout << &pi << " = " << ptr2 << "\n";
    // cout << &a << " = " << ptr << "\n";

    return 0;
} 