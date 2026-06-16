#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[101];
    int c, b;

    for (int i = 0; i < 101; ++i)
        arr[i] = 0;
    for (int i = 0; i < n; ++i) {
        cin >> c >> b;
        arr[b] += c;
    }

    int sum = 0, ans = 0;
    for (int i = 0; i <= 100; ++i) {
        sum = 0;
        for (int l = max(0, i -k); l <= min(100, i + k); ++l) {
            sum += arr[l];
        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}