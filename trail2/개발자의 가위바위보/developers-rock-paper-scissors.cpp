#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; ++i)
        cin >> arr[i][0] >> arr[i][1];
    int a[3] = {1, 2, 3};
    int ans = -1;
    for (int i = 0; i < 6; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j][0] == a[0] && arr[j][1] == a[1])
                cnt++;
            if (arr[j][0] == a[1] && arr[j][1] == a[2])
                cnt++;
            if (arr[j][0] == a[2] && arr[j][1] == a[0])
                cnt++;
        }
        ans = max(ans, cnt);
        next_permutation(a, a + 3);
    }
    cout << ans;
    return 0;
}