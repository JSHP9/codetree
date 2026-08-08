#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> v[i][j];

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1--; y1--; x2--; y2--;

        int tmp = v[x1][y1];

        // up
        for (int i = x1; i < x2; ++i)
            v[i][y1] = v[i + 1][y1];

        // left
        for (int j = y1; j < y2; ++j)
            v[x2][j] = v[x2][j + 1];

        // down
        for (int i = x2; i > x1; --i)
            v[i][y2] = v[i - 1][y2];

        // right
        for (int j = y2; j > y1 + 1; --j)
            v[x1][j] = v[x1][j - 1];

        v[x1][y1 + 1] = tmp;

        vector<vector<int>> nxt = v;

        for (int x = x1; x <= x2; ++x) {
            for (int y = y1; y <= y2; ++y) {

                int sum = v[x][y];
                int cnt = 1;

                for (int d = 0; d < 4; ++d) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;

                    sum += v[nx][ny];
                    cnt++;
                }

                nxt[x][y] = sum / cnt;
            }
        }

        v = nxt;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << v[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}