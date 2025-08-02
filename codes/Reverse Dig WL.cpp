#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10839;
    int rev = 0;

    while (n > 0)
    {
        int lastDig = n % 10;
        rev = rev * 10 + lastDig;
        n /= 10;
    }

    cout << " Reverse Num = " << rev << endl;

    return 0;
}