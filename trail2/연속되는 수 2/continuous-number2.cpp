#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max = 0, cnt = 1;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i == 0 || arr[i] != arr[i - 1]) {
            if (max < cnt)  {
                max = cnt;
            }
            cnt = 1;
        }
        else {
            cnt++;
        }
        if (cnt > max)
            max = cnt;
    }
    cout << max;
    return 0;
}