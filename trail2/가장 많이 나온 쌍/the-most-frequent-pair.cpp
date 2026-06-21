#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int pos[m][2];
    for (int i = 0; i < m; ++i)
        cin >> pos[i][0] >> pos[i][1];

    int posAB[n + 1][n + 1] = {};
    for (int j = 0; j < m; ++j) {
        int x1 = pos[j][0], x2 = pos[j][1];
        int a = min(x1, x2), b = max(x1, x2);
        posAB[a][b]++;
    }

    int ans = 0;
    for (int i = 1; i <=n; ++i)
        for (int j = 1; j <= n; ++j)
            if (posAB[i][j])
                ans = max(ans, posAB[i][j]);
    cout << ans;
    return 0;
}