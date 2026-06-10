#include <iostream>
using namespace std;

bool IsRange(int x, int y, int n) {
    return (1 <= x && x <= n &&
            1 <= y && y <= n);
}


int main() {
    int n, m;
    cin >> n >> m;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int arr[n + 1][n + 1];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            arr[i][j] = 0;
        }
    }
    int N, M;
    int cnt;
    for (int i = 0; i < m; ++i) {
        cin >> N >>  M;
        arr[N][M] = 1;
        cnt = 0;
        for (int i = 0; i < 4; ++i) {
            int nx = N + dx[i], ny = M + dy[i];
            if (IsRange(nx, ny, n) && arr[nx][ny] == 1) {
                cnt++;
            }
        }
        if (cnt == 3) 
            cout << 1 << "\n";
        else
        cout << 0 << "\n";
    
    }
    return 0;
}