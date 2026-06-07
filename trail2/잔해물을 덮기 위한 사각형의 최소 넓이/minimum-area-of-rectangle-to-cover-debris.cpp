#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int arr [2000][2000] = {0};
    int num = 0;
    for (int i = 0; i < 2; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        num++;
        for (int x = x1; x < x2; ++x) {
            for (int y = y1; y < y2; ++y) 
                arr[x + 1000][y + 1000] = num;
        }
    }
    int maxX = -2000, minX = 2000;
    int maxY = -2000, minY = 2000;
    for (int i = 0; i < 2000; ++i) {
        for (int j = 0; j < 2000; ++j) {
            if (arr[i][j] == 1 && i < minX) {
                    minX = i;
            }
            if (arr[i][j] == 1 && i > maxX) {
                    maxX = i;
            }
            if (arr[i][j] == 1 && j < minY) {
                    minY = j;
            }
            if (arr[i][j] == 1 && j > maxY) {
                    maxY = j;
            }
        }
    }
    int width = maxX - minX + 1; // 칸이라서 + 1
    int height = maxY - minY + 1;
    int ans = width * height;
    if (maxX == maxY && maxY == -2000)
        ans = 0;
    cout << ans;
    return 0;
}