#include <iostream>
using namespace std;

bool IsRange(int x, int y, int n) {
    return (1 <= x && x <= n && 1 <= y && y <= n);
}

int main() {
    int n, t;
    cin >> n >> t;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    string dir;
    int move = 0;
    int arr[n + 1][n + 1];
    cin >> dir;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> arr[i][j];
    int x = (n / 2) + 1;
    int y = (n / 2) + 1;
    int sum = arr[x][y], nx, ny;
    for (int i = 0; i < t; ++i) {
        if (dir[i] == 'L') {
            move = (move + 3) % 4;
        }
        else if (dir[i] == 'R') {
            move = (move + 1) % 4;
        }
        else { 
            nx = x + dx[move], ny = y + dy[move];
            if (IsRange(nx, ny, n)) {
                x += dx[move], y += dy[move];
                sum += arr[x][y]; 
        }
        }
    }
    cout << sum;
    return 0;
}