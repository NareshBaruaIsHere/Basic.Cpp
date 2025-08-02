#include <bits/stdc++.h>
using namespace std;

void func(int arr[])
{ // as an argument
    arr[0] = 1000;
}
void func2(int *ptr)
{ // as a pointer
    ptr[0] = 1000;
}

int main()
{

    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;

    int arr[] = {2, 4, 1, 5, 3};
    // int n = sizeof(arr) / sizeof(int);
    // cout << *arr << endl;
    // cout << *(arr + 1) << endl;  // we can write arr[0]
    // cout << *(arr + 2) << endl;  // we can write arr[1]
    // cout << *(arr + 3) << endl;  // we can write arr[2]
    // cout << *(arr + 4) << endl;

    func(arr); // passing array name is eq. to passing pointer
    cout << arr[0] << endl;
    func2(arr); // passing array name is eq. to passing pointer
    cout << arr[0] << endl;
    return 0;
}