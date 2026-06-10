#include <iostream>
using namespace std;

int Dir(char d) {
        if (d == 'N') {
            return 3;
        }
        if (d == 'E') {
            return 0;
        }
        if (d == 'S') {
            return 1;
        }
        if (d == 'W') {
            return 2;
        }
}

int main() {
    int n, move, d;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0 , 1};
    cin >> n;
    char dir;
    int x = 0, y = 0;
    int t = 0;
    for (int i = 0; i < n; ++i) {
        cin >> dir >> move;
        d = Dir(dir);
        for (int j = 0; j < move; ++j) {
            x = x + dx[d], y = y + dy[d];
            t++;
            if (i != 0 && x == 0 && y == 0) {
            cout << t;
            return 0;
            }
        }
    }
    cout << -1;
    return 0;
}