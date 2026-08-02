#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    int prevNum, cnt = 0;
    for (int i = 0; i < n; ++i) {
        prevNum = grid[i][0];
        cnt = 1;
        if (m == 1) {
            ans++;
            continue;    
        }
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] == prevNum) 
                cnt++;
            else {
                prevNum = grid[i][j];
                cnt = 1;
            }
            
            if (cnt >= m) {
                ans++;
                break;
            }
        }
    }

    for (int j = 0; j < n; ++j) {
        prevNum = grid[0][j];
        cnt = 1;
        if (m == 1) {
            ans++;
            continue;    
        }
        for (int i = 1; i < n; ++i) {
            if (grid[i][j] == prevNum) 
                cnt++;
            else {
                prevNum = grid[i][j];
                cnt = 1;
            }
            if (cnt >= m) {
                ans++;
                break;
            }
        }
    }

    cout << ans;
    return 0;
}
