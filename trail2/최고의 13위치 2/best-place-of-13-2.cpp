#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 2; ++j) {
            for (int k = 0; k < n; ++k) {
                if (i == k) {
                    for (int l = j + 3; l < n - 2; ++l) {
                        ans = max(ans, arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[k][l] + arr[k][l+1] + arr[k][l+2]);
                    }
                }
                else {
                    for (int l = 0; l < n - 2; ++l) {
                        ans = max(ans, arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[k][l] + arr[k][l+1] + arr[k][l+2]);
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}