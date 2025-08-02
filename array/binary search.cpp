#include <bits/stdc++.h>
using namespace std;

int binSearch(int *arr, int n, int key)
{
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid; // key found
        }
        else if (arr[mid] < key)
        { // 2nd half
            st = mid + 1;
        }
        else
        {
            // 1st half
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout << binSearch(arr, n, 44) << endl;
    return 0;
}