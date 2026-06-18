#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    int st[n];
    for (int i = 0; i < n; ++i)
        cin >> st[i];
    int maxCnt = 0, cnt = 0, sum = 0;
    sort(st, st + n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum = 0;
            cnt = 0;
            for (int k = j; k < n; ++k) {
                if (i == k) {
                    if (sum + (st[k] / 2) <= b) {
                        sum += st[k] / 2;
                        cnt++;
                        continue;
                    }
                }
                else {
                    if (sum + st[k] <= b) {
                        sum += st[k];
                        cnt++;
                        continue;
                    }
                }
            }
            maxCnt = max(maxCnt, cnt);
        }
    }
    cout << maxCnt;
    return 0;
}