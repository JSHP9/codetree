#include <iostream>
using namespace std;

int main() {
    int n, k, num;
    cin >> n >> k;
    char sign;
    int arr[10001];
    for (int i = 0; i < 10001; ++i)
        arr[i] = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num >> sign;
        if (sign == 'G')
            arr[num] = 1;
        if (sign == 'H')
            arr[num] = 2;
    }
    int sum = 0, ans = 0;
    for (int i = 0; i <= 10001 - k; ++i) {
        sum = 0;
        for (int j = i; j <= k + i; ++j) {
            sum += arr[j];
        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}