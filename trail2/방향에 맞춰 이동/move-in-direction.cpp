#include <iostream>
using namespace std;

int main() {
    char dir;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int nx = 0, ny = 0;
    int n, d;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> dir >> d;
        if (dir == 'N') {
            nx += dx[3] * d;
            ny += dy[3] * d;
        }
        if (dir == 'E') {
            nx += dx[0] * d;
            ny += dy[0] * d;
        }
        if (dir == 'S') {
            nx += dx[1] * d;
            ny += dy[1] * d;
        }
        if (dir == 'W') {
            nx += dx[2] * d;
            ny += dy[2] * d;
        }
    }
    cout << nx << " " << ny;
    return 0;
}