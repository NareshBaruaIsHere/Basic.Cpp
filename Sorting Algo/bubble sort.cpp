#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++) {
        bool isSwap = false;
        // cout << "outer loop ";
        for(int j=0; j<n-1; j++) {
            // cout << "inner loop ";
            // if(arr[j] > arr[j+1]) { //asending
            if(arr[j] < arr[j+1]) { //desending
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
    if(!isSwap) {
        //array is already sorted
        return;
    }
    }
    print(arr,n);
}
int main() {
    // int arr[5] = {5,4,1,3,2};
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // O(1,1)
    bubbleSort(arr,10);
    cout << endl;
    
    return 0;
}