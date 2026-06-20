#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int ans = 100000;
    for (int i = 0; i < n; ++i) {
        arr[i] *= 2;
        for (int j = 0; j < n; ++j) {
            int counting[n -1] = {};
            int cnt = 0, sum = 0;
            for (int k = 0; k < n; ++k) {
                if (j == k)
                    continue;
                counting[cnt++] = arr[k]; 
            }
            for (int k = 1; k < cnt; ++k) {
                sum += abs(counting[k] - counting[k - 1]);
            }
            ans = min(ans, sum);
        }
        arr[i] /= 2;
    }
    cout << ans;
    return 0;
}