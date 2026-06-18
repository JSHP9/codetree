#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            if (arr[i] == arr[j] && abs((i + 1) - (j + 1)) <= k)
                ans = max(ans, arr[i]);
        }
    }
    cout << ans;
    return 0;
}