#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1 = 0;
    int posX, x2;
    char dir;
    int arr[200] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> posX >> dir;
        if (dir == 'R') {
            x2 = x1 + posX;
            for (int j = x1; j < x2; ++j)
                arr[j + 100]++;
        }
        if (dir == 'L') {
            x2 = x1 - posX;
            for (int j = x2; j < x1; ++j)
                arr[j + 100]++;
        }
        x1 = x2;
    }
    int cnt;
    for (int i = 0; i < 200; ++i)
        if (arr[i] >= 2)
            cnt++;
    cout << cnt;
    return 0;
}