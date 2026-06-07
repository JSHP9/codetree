#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int arr [2000][2000] = {0};
    int num = 0;
    for (int i = 0; i < 3; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        num++;
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) 
                arr[x + 1000][y + 1000] = num;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 2000; ++i) {
        for (int j = 0; j < 2000; ++j)
            if (arr[i][j] == 1 || arr[i][j] == 2)
                cnt++;
    }
    cout << cnt;
    return 0;
}