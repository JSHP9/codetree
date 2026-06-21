#include <iostream>
#include <algorithm>
using namespace std;

bool isAns(int arr[], int n[]) {
    sort(n, n + 15);
    for (int i = 0; i < 15; ++i) {
        if (arr[i] != n[i])
            return false;
    }
    return true;
}

int main() {
    int a, b, c, d;
    int arr[15];
    for (int i = 0; i < 15; ++i)
        cin >> arr[i];

    sort(arr, arr + 15);
    for (int i = 1; i <= 10; ++i) {
            if (i != arr[0])
                continue;
        for (int j = 1; j <= 10; ++j) {
                if (j != arr[1])
                    continue;
            for (int k = 1; k <= 10; ++k) {
                for (int l = 1; l <= 10; ++l) {
                int n[15] = {};
                n[0] = i;
                n[1] = j;
                n[2] = k;
                n[3] = l;
                n[4] = i + j;
                n[5] = j + k;
                n[6] = k + l;
                n[7] = l + i;
                n[8] = i + k;
                n[9] = j + l;
                n[10] = i + j + k;
                n[11] = i + j + l;
                n[12] = i + k + l;
                n[13] = j + k + l;
                n[14] = i + j + k + l;
                if (isAns(arr, n)) {
                    cout << i << " " << j << " " << k << " " << l;
                    return 0;
                }
                }
            }
        }
    }
    return 0;
}