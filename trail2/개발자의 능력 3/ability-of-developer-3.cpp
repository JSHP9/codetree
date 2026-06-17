#include <iostream>
#include <utility>
#include <climits>
using namespace std;

int minDiff(int a, int b, int c, int s) {
    int sum1 = a + b + c;
    int sum2 = s - sum1;
    
    return abs(sum1 - sum2);
}

int main() {
    int arr[6];
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    int ans = INT_MAX;
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            for (int k = j + 1; k < 6; ++k) {
                ans = min(ans, minDiff(arr[i] , arr[j], arr[k], sum));
            }
        }
    }
    cout << ans;
    return 0;
}