#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; ++i)
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    int cnt = 0, ans = 0;
    for (int i = 0; i < 3; ++i) {
        int num = i + 1;
        int cup[3] = {};
        cnt = 0;
        cup[i] = i + 1;
        for (int j = 0; j < n; ++j) {
            int cmp = cup[arr[j][0] - 1];
            cup[arr[j][0] - 1] = cup[arr[j][1] - 1];
            cup[arr[j][1] - 1] = cmp;
            if (cup[arr[j][2] - 1] == i + 1) {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}