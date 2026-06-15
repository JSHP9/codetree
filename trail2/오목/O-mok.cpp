#include <iostream>
using namespace std;

int main() {
    int arr[19][19];
    for (int i = 0; i < 19; ++i) 
        for (int j = 0; j < 19; ++j)
            cin >> arr[i][j];
        
    int ans = 0;
    int x, y;
    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19; ++j) {

            if (arr[i][j] == 0) continue;

            if (i + 4 < 19 && j + 4 < 19 &&
                arr[i][j] == arr[i+1][j+1] &&
                arr[i][j] == arr[i+2][j+2] &&
                arr[i][j] == arr[i+3][j+3] &&
                arr[i][j] == arr[i+4][j+4]) {

                ans = arr[i][j];
                x = i + 2;
                y = j + 2;
            }

            if (i + 4 < 19 &&
                arr[i][j] == arr[i+1][j] &&
                arr[i][j] == arr[i+2][j] &&
                arr[i][j] == arr[i+3][j] &&
                arr[i][j] == arr[i+4][j]) {

                ans = arr[i][j];
                x = i + 2;
                y = j;
            }

            if (j + 4 < 19 &&
                arr[i][j] == arr[i][j+1] &&
                arr[i][j] == arr[i][j+2] &&
                arr[i][j] == arr[i][j+3] &&
                arr[i][j] == arr[i][j+4]) {

                ans = arr[i][j];
                x = i;
                y = j + 2;
            }

            if (i - 4 >= 0 && j + 4 < 19 &&
                arr[i][j] == arr[i-1][j+1] &&
                arr[i][j] == arr[i-2][j+2] &&
                arr[i][j] == arr[i-3][j+3] &&
                arr[i][j] == arr[i-4][j+4]) {

                ans = arr[i][j];
                x = i - 2;
                y = j + 2;
            }

            if (ans) {
                cout << ans << "\n";
                cout << x + 1 << " " << y + 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}