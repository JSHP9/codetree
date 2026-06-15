#include <iostream>
#include <climits>
using namespace std;

int main() {
    int s, n;
    cin >> n >> s;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
    int staticSum = sum;
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sum = staticSum;
            sum -= arr[i] + arr[j];
            if (abs(s - sum) < ans) {
                ans = abs(s - sum);
            }
        }
    }
    cout << ans;
    return 0;
}