#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    int arr [200][200] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) 
                arr[x + 100][y + 100] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 200; ++i) {
        for (int j = 0; j < 200; ++j)
            if (arr[i][j])
                cnt++;
    }
    cout << cnt;
    return 0;
}