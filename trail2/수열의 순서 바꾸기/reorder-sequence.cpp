#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], a[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    int idx = n - 1;
    while (idx > 0 && arr[idx - 1] < arr[idx])
        idx--;
    cout << idx;
    return 0;
}