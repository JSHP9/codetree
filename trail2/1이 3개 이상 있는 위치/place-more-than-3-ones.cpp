#include <iostream>
using namespace std;

bool IsRange(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}


int main() {
    int n;
    cin >> n;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int arr[n][n];
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    int cnt;
    for (int k = 0; k < n; ++k) {
        for (int j = 0; j < n; ++j) {
            cnt = 0;
                for (int i = 0; i < 4; ++i) {
                    int nx = k + dx[i], ny = j + dy[i];
                    if (IsRange(nx, ny, n) && arr[nx][ny] == 1) {
                        cnt++;
                        if (cnt >= 3) {
                            ans++;
                            break;
                        }
                    }
                }
        }
    }
    cout << ans;
    return 0;
}