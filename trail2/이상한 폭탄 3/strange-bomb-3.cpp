#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int bomb[1000001] = {};
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] != arr[j])
                continue;

            if (j - i <= k)
                bomb[arr[i]]++;
        }
    }
    int ans = 0;
    for (int i = 1; i < 1000001; ++i)
        if (bomb[i])
            ans = (bomb[i] > ans) ? i : ans;
    cout << ans;
    return 0;
}