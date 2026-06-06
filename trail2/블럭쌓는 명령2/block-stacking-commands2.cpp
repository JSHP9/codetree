#include <iostream>
using namespace std;

int main() {
    int n, k, a, b;
    cin >> n >> k;
    int arr[n] = {0};
    for (int i = 0; i < k; ++i) {
        cin >> a >> b;
        for (int j = a; j <= b; ++j)
            arr[j - 1]++;
    }
    int max = 0;
    for (int i = 0; i < n; ++i) {
        if (max < arr[i])
            max = arr[i];
    }
    cout << max;
    return 0;
}