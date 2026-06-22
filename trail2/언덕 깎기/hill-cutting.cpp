#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int ans = 99999999;
    for (int i = 0; i <= 82; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if (i <= arr[j] && arr[j] <= i + 17)
                continue;
            if (arr[j] < i)
                sum += (i - arr[j]) * (i - arr[j]);
            else
                sum += (arr[j] - (i + 17)) * (arr[j] - (i + 17));
        }
        ans = min(ans, sum);
    }
    cout << ans;
    return 0;
}