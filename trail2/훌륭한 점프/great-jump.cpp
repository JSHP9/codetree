#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int i) {
    int arr2[n] = {};
    int cnt = 0;
    for (int j = 0; j < n; ++j) 
        if (arr[j] <= i)
            arr2[cnt++] = j;
    
    for (int j = 1; j < cnt; ++j) {
        int dist = arr2[j] - arr2[j - 1];
        if (dist > k)
            return false;
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        m = max(m, arr[i]);
    }
    int ans = 1000;
    for (int i = max(arr[0], arr[n - 1]); i <= m; ++i) {
        if (isPossible(arr, n, k, i))
            ans = min(ans, i);
    }
    cout << ans;
    return 0;
}