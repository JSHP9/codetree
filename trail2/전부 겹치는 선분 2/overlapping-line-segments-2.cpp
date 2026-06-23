#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos[n][2];
    for (int i = 0; i < n; ++i)
        cin >> pos[i][0] >> pos[i][1];

    for (int i = 0; i < n; ++i) {
        int arr[101] = {};
        for (int j = 0; j < n; ++j) {
        if (i == j)
            continue;
            for (int k = pos[j][0]; k <= pos[j][1]; ++k) {
                arr[k]++;
                if (arr[k] == n - 1) {
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";
    return 0;
}