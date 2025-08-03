#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 18;
    int count = 1;
    int sum = 0;
    while (count <= n)
    {
        cout << count << endl;
        sum += count;
        count++;
    }
    cout << "\nSum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}