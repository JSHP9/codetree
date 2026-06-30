#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; ++i)
        cin >> arr[i][0] >> arr[i][1];
    int a = 111, b = 0, ans = 111;
    for (int i = 0; i < n; ++i) {
        a = 111, b = 0;
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            a = min(a, arr[j][0]);
            b = max(b, arr[j][1]);
        }
        ans = min(ans, b - a);
    }
    cout << ans;
    return 0;
}