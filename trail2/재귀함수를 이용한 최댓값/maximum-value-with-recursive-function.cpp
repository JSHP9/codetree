#include <iostream>

using namespace std;

int n;
int arr[100];

int Max(int arr[], int n) {
    if (n == 0)
        return arr[0];
    int prevMax = Max(arr, n - 1);
    return (arr[n] > prevMax) ? arr[n] : prevMax;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << Max(arr, n - 1);

    return 0;
}