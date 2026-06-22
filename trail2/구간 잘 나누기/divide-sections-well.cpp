#include <iostream>
using namespace std;


bool isPossible(int arr[], int n, int m, int i) {
    int arr2[n] = {};
    int cnt = 1;
    int sum = 0;

    for(int j = 0; j < n; j++) {
        if(sum + arr[j] > i) {
            sum = arr[j];
            cnt++;
        }
        else
            sum += arr[j];
    }
    if (cnt <= m)
        return true;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    int sum = 0, arrMin = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
        arrMin = max(arrMin, arr[i]);
    }
    
    int ans = 100000;
    for (int i = arrMin; i < sum; ++i) {
        if (isPossible(arr, n, m, i))
            ans = min(ans, i);
    }
    cout << ans;
    return 0;
}