#include <iostream>
using namespace std;

void DivEven(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) 
            cout << arr[i] / 2 << " ";
        else
            cout << arr[i] << " ";
    }
}

int main() {
    int n, x;
    cin >> n;
    int arr[50];
    for (int i = 0; i < n; ++i) {
        cin >> x;
        arr[i] = x;
    }
    DivEven(arr, n);
    return 0;
}