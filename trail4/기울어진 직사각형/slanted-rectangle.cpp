#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int grid[n][n];
    int dx[4] = {1, -1, -1, 1}, dy[4] = {-1, -1, 1, 1};
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {   
            for (int a = 1; a < n; ++a) {
                for (int b = 1; b < n; ++b) {
                int sum = 0;
                int y = i;
                int x = j;
                bool clear = true;
                    for (int l = 0; l < a; ++l) {
                        sum += grid[y][x];
                        y += dy[0];
                        x += dx[0];
                        if (y < 0 || y >= n || x < 0 || x >= n) {
                            y -= dy[0];
                            x -= dx[0];
                            clear = false;
                            break;
                        }
                    }
                    for (int l = b; l > 0; --l) {
                        sum += grid[y][x];
                        y += dy[1];
                        x += dx[1];
                        if (y < 0 || y >= n || x < 0 || x >= n) {
                            y -= dy[1];
                            x -= dx[1];
                            clear = false;
                            break;
                        }
                    }
                    for (int l = a; l > 0; --l) {
                        sum += grid[y][x];
                        y += dy[2];
                        x += dx[2];
                        if (y < 0 || y >= n || x < 0 || x >= n) {
                            y -= dy[2];
                            x -= dx[2];
                            clear = false;
                            break;
                        }
                    }
                    for (int l = 0; l < b; ++l) {
                        sum += grid[y][x];
                        y += dy[3];
                        x += dx[3];
                        if (y < 0 || y >= n || x < 0 || x >= n) {
                            y -=dy[3];
                            x -= dx[3];
                            clear = false;
                            break;
                        }
                    }
                if (clear)
                    ans = max(ans, sum);
                }
            }
        }
    }

    cout << ans;
    return 0;
}