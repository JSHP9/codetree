#include <iostream>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    int ans, ans2 = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] == '1')
            continue;
        str[i] = '1';
        for (int j = 0; j < n; ++j) {
            if (i == j || str[j] == '1')
                continue;
            str[j] = '1';
            int arr[n] = {};
            for (int k = 0; k < n; ++k) {
                if (str[k] == '0')
                    continue;
                arr[k] = k + 1;
            }
            bool flag = false;
            int prev;
            ans = 1000;
            for (int k = 0; k < n; ++k) {
                if (!flag && arr[k]) {
                    prev = arr[k];
                    flag = true;
                }
                else if (flag && arr[k]) {
                    ans = min(ans, arr[k] - prev);
                    prev = arr[k];
                }
            }
            ans2 = max(ans2, ans);
            str[j] = '0';
        }
        str[i] = '0';
    }
    cout << ans2;
    return 0;
}