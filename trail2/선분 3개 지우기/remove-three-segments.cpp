#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos[n][2];
    for (int i = 0; i < n; ++i) 
        cin >> pos[i][0] >> pos[i][1];
    int ans = 0;
    bool flag = true;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int counting[101] = {};
                flag = true;
                if (i == j || i == k || j == k)
                    continue;
                for (int l = 0; l < n; ++l) {
                    if (i != l && j != l && k != l) {
                        int x1 = pos[l][0], x2 = pos[l][1];
                        for (int p = x1; p <= x2; ++p)
                            counting[p]++;
                    }
                }
                for (int l = 0; l < 101; ++l) {
                    if (counting[l] >= 2) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    ans++;
                }
            }
        }
    }
    cout << ans;
    return 0;
}