#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        m = max(m, h[i]);
    }
    
    int ans = 0, cnt;
    int arr[n];
    bool chL = true;
    for (int i = 1; i <= m + 1; ++i) { // 빙산 높이
        cnt = 0;
        chL = true;
        for (int j = 0; j < n; ++j) {
            arr[j] = h[j] - i;
            if (h[j] - i  < 0)
                arr[j] = 0;
        }
        for (int j = 1; j < n; ++j) {
            if (chL && arr[0] > 0) {
                cnt++;
                chL = false;
            }
            if (arr[j] > 0 && arr[j - 1] == 0)
                cnt++;
        }
        ans = max(ans, cnt);
        cnt = 0;
    }
    cout << ans;
    return 0;
}