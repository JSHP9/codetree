#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        m = max(m, arr[i]);
    }

    int ans = 0;
    for (int i = 1; i <= m; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (i <= arr[j] && arr[j] <= i + k)
                cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}