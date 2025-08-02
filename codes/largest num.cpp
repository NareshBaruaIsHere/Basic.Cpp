#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cout << "enter a :";
    cin >> a;
    cout << "enter b :";
    cin >> b;
    cout << "enter c :";
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << "Largest is a = " << a << endl;
    }
    else if (b >= c)
    {
        cout << "Largest is b = " << b << endl;
    }
    else
    {
        cout << "Largest is c = " << c << endl;
    }
    return 0;
}