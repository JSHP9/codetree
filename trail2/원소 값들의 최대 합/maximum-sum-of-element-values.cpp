#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[101];
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        int prev = 0;
        for (int j = 1; j <= m; ++j) {
            if (j == 1) {
                prev = arr[i];
                sum += arr[i];
                continue;
            }
            sum += arr[prev];
            prev = arr[prev];

        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}