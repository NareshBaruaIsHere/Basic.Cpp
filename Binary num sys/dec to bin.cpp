#include <bits/stdc++.h>
using namespace std;

void decTobin(int decNum)
{
    int n = decNum;
    int pow = 1; // 10^0 10^1 10^2...
    int binNum = 0;

    while (n > 0)
{
    int rem = n % 2; // Fix: use n instead of decNum
    binNum += rem * pow;
    n = n / 2;
    pow = pow * 10;
}
    cout << "binary of " << decNum << " = " << binNum << endl;
}

int main()
{

    decTobin(4);

    return 0;
}