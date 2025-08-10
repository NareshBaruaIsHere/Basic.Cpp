#include <bits/stdc++.h>
using namespace std;
// pass by ref using reference variable
void changeA(int &a)
{   

    a = 20;
    cout << a << "\n";
}

int main()
{

    int a = 10;
    changeA(a);

    cout << a << "\n";


    return 0;
}