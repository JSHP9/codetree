#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int grid[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];
    
    int gold, ans = 0;
    for (int k = 0; k < 20; ++k) {
        for (int centerRow = 0; centerRow < n; ++centerRow) {
            for (int centerCol = 0; centerCol < n; ++centerCol) {
                gold = 0;
                for (int row = -k; row <= k; ++row) {
                    int width = k - abs(row);
                    for (int col = -width; col <= width; ++col) {
                        int newRow = row + centerRow;
                        int newCol = col + centerCol;

                        if (newCol < 0 || n <= newCol || newRow < 0 || n <= newRow)
                            continue;
                        if (grid[newRow][newCol] == 1)
                            ++gold;
                    }
                }
                if (gold * m >= (k * k) + ((k + 1) * (k + 1)))
                    ans = max(ans, gold);
            }
        }
    }
    cout << ans;
    return 0;
}