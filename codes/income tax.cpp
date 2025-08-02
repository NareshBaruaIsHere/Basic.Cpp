#include <bits/stdc++.h>
using namespace std;

int main()
{

    //! Income Tex Cal

    int income;
    float tax;

    cout << "enter income (in Lakhs) : ";
    cin >> income;

    if (income < 5)
    {
        tax = 0;
    }
    else if (income <= 10)
    {
        tax = 0.2 * income;
    }
    else
    {
        tax = 0.3 * income;
    }

    cout << "Tax = " << (tax * 100000) << endl;

    return 0;
}