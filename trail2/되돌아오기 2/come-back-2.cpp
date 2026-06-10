#include <iostream>
using namespace std;

int main() {
    string d;
    cin >> d;
    int t = 0, dir = 0; 
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int nx = 0, ny = 0;
    for (int i = 0; i < d.length(); ++ i) {
        
        if (d[i] == 'R') {
            dir = (dir + 1) % 4;
            t++;
        }
        if (d[i] == 'L') {
            dir = (dir + 3) % 4;
            t++;
        }
        if (d[i] == 'F') {
            nx += dx[dir], ny += dy[dir];
            t++;
            if (i != 0 && nx == 0 && ny == 0) {
            cout << t;
            return 0;
        }
        }
    }
    cout << -1;
    return 0;
}