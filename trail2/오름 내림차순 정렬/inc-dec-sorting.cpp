#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}