#include <iostream>
using namespace std;

int main() {
    int dir = 0; 
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int nx = 0, ny = 0;
    string direction;
    cin >> direction;
    for (int i = 0; i < direction.length(); ++i) {
        if (direction[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        if (direction[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        if (direction[i] == 'F') {
            nx += dx[dir], ny += dy[dir];
        }
    }
    cout << nx << " " << ny;
    return 0;
}