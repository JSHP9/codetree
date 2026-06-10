#include <iostream>
using namespace std;

bool IsRange(int x, int y, int n, int m) {
    return (1 <= x && x <= n && 1 <= y && y <= m);
}

int main() {
    int n, m;
    cin >> n >> m;
    char arr[n + 1][m  + 1] = {};
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int x = 1, y = 1;
    int nx, ny;
    int dir = 0;
    arr[1][1] = 65;
    for (int i = 2; i <= n * m; ++i) {
        nx = x + dx[dir], ny = y + dy[dir];
        if (!IsRange(nx, ny, n, m) || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }
        x += dx[dir], y += dy[dir];
            arr[x][y] = 65 + (i - 1)% 26;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}