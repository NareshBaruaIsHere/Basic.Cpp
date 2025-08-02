#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x=10;
    int *ptr = &x;
    
    int y =25;
    ptr = &y;
    cout << *ptr <<"/n" ;
    
    return 0;
}