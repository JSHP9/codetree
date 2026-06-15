#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string arr[n];
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == 'L') {
                if (i + 2 < n && j + 2 < m && arr[i + 1][j + 1] == 'E' && arr[i + 2][j + 2] == 'E')
                    cnt++;
                if (i - 2 >= 0 && j + 2 < m && arr[i - 1][j + 1] == 'E' && arr[i - 2][j + 2] == 'E')
                    cnt++;
                if (i + 2 < n && j - 2 >= 0 && arr[i + 1][j - 1] == 'E' && arr[i + 2][j - 2] == 'E')
                    cnt++;
                if (i - 2 >= 0 && j - 2 >= 0 && arr[i - 1][j - 1] == 'E' && arr[i - 2][j - 2] == 'E')
                    cnt++;
                if (i + 2 < n && arr[i + 1][j] == 'E' && arr[i + 2][j] == 'E')
                    cnt++;
                if (i - 2 >= 0 && arr[i - 1][j] == 'E' && arr[i - 2][j] == 'E')
                    cnt++;
                if (j + 2 < m && arr[i][j + 1] == 'E' && arr[i][j + 2] == 'E')
                    cnt++;
                if (j - 2 >= 0 && arr[i][j - 1] == 'E' && arr[i][j - 2] == 'E')
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}