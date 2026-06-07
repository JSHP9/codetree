#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    int arr [200][200] = {0};
    int num = 0; // 빨: 홀, 파: 짝
    for (int i = 0; i < n; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        num++; 
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) 
                arr[x + 100][y + 100] = num;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 200; ++i) {
        for (int j = 0; j < 200; ++j)
            if (arr[i][j] != 0 && arr[i][j] % 2 == 0)
                cnt++;
    }
    cout << cnt;
    return 0;
}