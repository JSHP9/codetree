#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int grid[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> grid[i][j];

    int ans = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int a = i; a < n; ++a) {
                for (int b = j; b < m; ++b) {
                    int sum = 0;
                    bool clear = true;

                    for (int x = i; x <= a; ++x) {
                        for (int y = j; y <= b; ++y) {
                            if (grid[x][y] <= 0) {
                                clear = false;
                                break;
                            }
                        }
                        if (!clear)
                            break;
                    }
                sum = (a - i + 1) * (b - j + 1);
                if (clear)
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout << ans;
    return 0;
}