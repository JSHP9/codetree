#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int mid = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mid += arr[i];
    }

    mid /= n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > mid) {
            ans += arr[i] - mid;
        }
    }
    cout << ans;
    return 0;
}