#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, h, t;
    cin >> n >> h >> t;
    int arr[n], arr1[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)
        arr1[i] = 0;
    int ans = 10000, cnt = 0;
    for (int i = 0; i <= n - t; ++i) {
        cnt = 0;
        for (int j = i; j < i + t; ++j) {
            cnt += abs(h - arr[j]);
        }
        ans = min(ans, cnt);
    }
    cout << ans;
    return 0;
}