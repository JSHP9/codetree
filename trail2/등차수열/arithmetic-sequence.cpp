#include <iostream>
using namespace std;

bool check(int a, int b, int c) {
    if (a + b == 2 * c) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int ans = 0, cnt = 0;
    for (int i = 1; i < 101; ++i) {
        cnt = 0;
        for (int j = 0; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                bool isTrue = check(arr[j], arr[k], i);
                if (isTrue)
                    cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}