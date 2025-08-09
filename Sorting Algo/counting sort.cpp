#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int n)
{
    int freq[100000] = {0}; // range
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 1st step - O(n)
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    // 2nd step - O(range) = max - min
    int j = 0;
    for (int i = minVal; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}
int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    countingSort(arr, 8);

    return 0;
}