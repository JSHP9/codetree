#include <iostream>
using namespace std;

int Dir(char d) {
    if (d == 'R') {return 0;}
    if (d == 'D') {return 1;}
    if (d == 'U') {return 2;}
    if (d == 'L') {return 3;}
}

bool IsRange(int x, int y, int n) {
    return (1 <= x && x <= n && 1 <= y && y <= n);
}


int main() {
    int n, t;
    cin >> n >> t;
    int x = 0, y = 0;
    int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1}; // 기준이 행렬
    char dir;
    int move;
    int nx, ny;
    cin >> x >> y >> dir;
    move = Dir(dir);
    while (t--) {
        nx = x + dx[move], ny = y + dy[move];
        if (!IsRange(nx, ny, n)) {
            move = 3 - move; // 방향 전환
        }
        else {
        x += dx[move], y += dy[move];
        }
    }
    cout << x << " " << y;
    return 0;
}