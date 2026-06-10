#include <iostream>
using namespace std;

bool IsRange(int x, int y, int n) {
    return (1 <= x && x <= n &&
            1 <= y && y <= n);
}


int main() {
    int n, k, dir = 0;
    cin >> n;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    char mirror[n + 1][n + 1];
    for (int i = 1; i <= n; ++i) 
        for (int j = 1; j <= n;++j)
            cin >> mirror[i][j];
    cin >> k;
    int x, y;
    int side = (k - 1) / n;
    int offset = (k - 1) % n;

    if(side == 0){
        x = 0;
        y = offset + 1;
        dir = 0;
    }
    else if(side == 1){
        x = offset + 1;
        y = n + 1;
        dir = 3;
    }
    else if(side == 2){
        x = n + 1;
        y = n - offset;
        dir = 2;
    }
    else{
        x = n - offset;
        y = 0;
        dir = 1;
    }
    int cnt = 0;
    int nx, ny;
    while (true) {
        nx = x + dx[dir], ny = y + dy[dir];
        if (!IsRange(nx, ny, n)) {
            cout << cnt;
            return 0;
        }
        
        x += dx[dir], y += dy[dir];
        cnt++;

        if (mirror[x][y] == '/' && dir % 2 == 0) { // 반시계
            dir = (dir + 3) % 4;
        }
        else if (mirror[x][y] == '/' && dir % 2 == 1) { // 시계
            dir = (dir + 1) % 4;
        }
        else if (mirror[x][y] == '\\' && dir % 2 == 0) { // 시계
            dir = (dir + 1) % 4;
        }
        else if (mirror[x][y] == '\\' && dir % 2 == 1) { // 반시계
            dir = (dir + 3) % 4;
        }
    }
    return 0;
}