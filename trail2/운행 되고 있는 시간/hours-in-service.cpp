#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int counting[1001] = {};
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            int x1 = arr[j][0], x2 = arr[j][1];
            for (int k = x1; k < x2; ++k)
                counting[k] = 1;
        }
        int cnt = 0;
        for (int j = 0; j < 1001; ++j) {
            if (counting[j] == 1)
                cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}