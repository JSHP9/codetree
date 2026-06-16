#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            sum = 0;
            for (int k = i; k <= j; ++k) {
                sum += arr[k];
            }
            for (int k = i; k <= j; ++k) {
                if (sum % (j - i + 1) == 0 && sum / (j - i + 1) == arr[k]) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}