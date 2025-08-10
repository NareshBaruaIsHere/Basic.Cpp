#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = NULL;
    cout << ptr << "\n";
    cout << *ptr << "\n"; //Segmentation error
    return 0;
}