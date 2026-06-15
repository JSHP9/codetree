#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    for (int i = 0; i < n; ++i) {
        if (i + 2 < n) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (arr[i] <= arr[j] && arr[j] <= arr[k])
                        cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}