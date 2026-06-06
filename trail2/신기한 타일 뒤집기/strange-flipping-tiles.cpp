#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1 = 0;
    int posX, x2;
    char dir;
    int arr[200000] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> posX >> dir;
        if (dir == 'R') {
            x2 = x1 + posX - 1;
            for (int j = x1; j <= x2; ++j) {
                arr[j + 100000] = 1;
            }
        }
        if (dir == 'L') {
            x2 = x1 - posX + 1;
            for (int j = x2; j <= x1; ++j) {
                arr[j + 100000] = 2;
            }
        }
        x1 = x2;
    }
    int black = 0, white = 0;
    for (int i = 0; i < 200000; ++i) {
        if (arr[i] == 1)
            black++;     
        if (arr[i] == 2) 
            white++;
    }
    cout << white << " " << black ;
    return 0;
}