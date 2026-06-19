#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, c, g, h;
    cin >> n >> c >> g >> h;
    int arr[1002][2];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0] >> arr[i][1];
    }
    int ans = 0;
    int x1, x2;
    int sum;
    for (int i = -1; i <= 1001; ++i) {
        sum = 0;
        for (int j = 0; j < n; ++j) {
            if (i < arr[j][0])
                sum += c;
            else if (i <= arr[j][1])
                sum += g;
            else 
                sum += h;
        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}