#include <bits/stdc++.h>
using namespace std;

int main() {
    
    float eng;
    float sci;
    float math;

    cout << "enter eng marks = ";
    cin >> eng;
    cout << "enter sci marks = ";
    cin >> sci;
    cout << "enter math marks = ";
    cin >> math;

    float avg = (eng + sci + math ) / 3;
    cout << "Avg marks = " << avg << endl;
    return 0;
}