#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int sum = 0, ans = 0;
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    bool needEven = true;
    while (true) {
        if (needEven) {
            if (even > 0)
                even--;
            else if (odd >= 2)
                odd -= 2;
            else
                break;
        } else {
            if (odd == 0)
                break;
            odd--;
        }

        ans++;
        needEven = !needEven;
    }

    if (odd == 1)
        ans--;

    cout << ans;
    return 0;
}
