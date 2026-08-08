#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[2][n];
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];

    for (int k = 0; k < t; ++k) {
        int temp1 = arr[0][n - 1], temp2 = arr[1][n - 1];
        for (int j = n - 1; j > 0; --j) {
            arr[0][j] = arr[0][j -  1];
            arr[1][j] = arr[1][j -  1];
        }
        arr[0][0] = temp2;
        arr[1][0] = temp1;
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}