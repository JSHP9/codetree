#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[m];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    int ans = 0;
    bool flag = false;
    for (int i = 0; i <= n - m; ++i) {
        flag = true;
        for (int j = 0; j < m; ++j) {
            c[j] = a[j + i];
        }
        sort(c, c + m);
        sort(b, b + m);
        for (int j = 0; j < m; ++j) {
            if (c[j] != b[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}