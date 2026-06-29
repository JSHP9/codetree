#include <iostream>
#include <queue>
using namespace std;

char board[10][10];
bool visited[10][10];
int dist[10][10];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    queue<pair<int,int>> q;

    int sx, sy;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> board[i][j];

            if (board[i][j] == 'L') {
                sx = i;
                sy = j;
            }
        }
    }

    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty()) {

        pair<int,int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (int i = 0; i < 4; i++) {

            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10)
                continue;
            if (visited[nx][ny] == true)
                continue;
            if (board[nx][ny] == 'R')
                continue;
            visited[nx][ny] = true;
            dist[nx][ny] = dist[x][y] + 1;

            if (board[nx][ny] =='B') {
                cout << dist[nx][ny] - 1;
                return 0;
            }

            q.push({nx, ny});
        }
    }
}