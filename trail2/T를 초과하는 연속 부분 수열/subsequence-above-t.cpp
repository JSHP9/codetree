#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[n];
    int max = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] <= t) {
            cnt = 0;
        }
        else {
            cnt++;
        }
        if (max < cnt)
            max = cnt;
    }
    cout << max;
    return 0;
}