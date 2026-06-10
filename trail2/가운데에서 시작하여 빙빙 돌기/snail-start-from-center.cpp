#include <iostream>
using namespace std;

bool IsRange(int x, int y, int n) {
    return (1 <= x && x <= n && 1 <= y && y <= n);
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1][n  + 1] = {};
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int x = n, y = n;
    int nx, ny;
    int dir = 2;
    arr[n][n] = n * n;
    for (int i = n * n - 1; i >= 1; --i) {
        nx = x + dx[dir], ny = y + dy[dir];
        if (!IsRange(nx, ny, n) || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }
        x += dx[dir], y += dy[dir];
        arr[x][y] = i;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}