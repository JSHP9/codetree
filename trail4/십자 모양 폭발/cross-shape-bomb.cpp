#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> a(N, vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    int r, c;
    cin >> r >> c;
    r--;
    c--;

    int power = a[r][c];

    // 폭발
    a[r][c] = 0;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (int d = 0; d < 4; d++) {
        for (int k = 1; k < power; k++) {
            int nr = r + dr[d] * k;
            int nc = c + dc[d] * k;

            if (nr < 0 || nr >= N || nc < 0 || nc >= N)
                break;

            a[nr][nc] = 0;
        }
    }

    // 중력
    for (int c = 0; c < N; c++) {
        vector<int> v;

        // 0이 아닌 숫자만 모음
        for (int r = 0; r < N; r++) {
            if (a[r][c] != 0)
                v.push_back(a[r][c]);
        }

        // 위쪽은 0
        for (int r = 0; r < N; r++)
            a[r][c] = 0;

        // 아래쪽부터 채움
        int idx = v.size() - 1;

        for (int r = N - 1; r >= 0 && idx >= 0; r--) {
            a[r][c] = v[idx--];
        }
    }

    // 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}