#include <iostream>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int cnt = 0;
        int chance = l;
        for (int j = 0; j < n; ++j) {
            if (chance && arr[j] + 1 == i)  {
                chance--;
            }
            else if (arr[j] < i)
                continue;

            cnt++;
        }
        if (i <= cnt)
            ans = max(ans, i);
    }
    cout << ans;
    return 0;
}