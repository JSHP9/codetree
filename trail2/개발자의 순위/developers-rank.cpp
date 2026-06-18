#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    int arr[k][n];
    for (int i = 0; i < k; ++ i) 
        for (int j = 0; j < n; ++j) 
            cin >> arr[i][j];

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j)
                continue;
            bool flag = true;
            for (int l = 0; l < k; ++l) {
                for (int p = 0; p < n; ++p) {
                    if (arr[l][p] == i) {
                        break;
                    }
                    if (arr[l][p] == j) {
                        flag = false;
                        break;
                    }
                    if (!flag)
                        break;
                }
            }
            if (flag) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}