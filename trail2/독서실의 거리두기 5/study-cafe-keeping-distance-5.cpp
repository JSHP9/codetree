#include <iostream>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    int ans = -100;
    for (int i = 0; i < n; ++i) {
        int arr[n] = {};
        if (str[i] == '1')
            continue;
        str[i] = '1';
        for (int j = 0; j < n; ++j) {
            if (str[j] == '1')
                arr[j] = j + 1;
        }
        int sub = 0, m = 100;
        for (int j = 0; j < n; ++j) {
            if (!sub && arr[j])
                sub = arr[j];
            else if (sub && arr[j]) {
            int cmp = arr[j] - sub;
            sub = arr[j];
            m = min(m, cmp);
            }

        }
        ans = max(ans, m);
        str[i] = '0';
    }
    cout << ans;
    return 0;
}