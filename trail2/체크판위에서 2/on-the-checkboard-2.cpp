#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    for (int i = 0; i < r; ++i) 
        for (int j = 0; j < c; ++j)
            cin >> arr[i][j];
    int ans = 0;
    for (int i = 1; i < r - 1; ++i) {
        for (int j = 1; j < c - 1; ++j) {
            if(arr[i][j] == arr[0][0])
                continue; // 중간점 1
            for (int k = i + 1; k < r - 1; ++k) {
                for (int l = j + 1; l < c - 1; ++l) {
                    if(arr[i][j] == arr[k][l])
                        continue;
                    if(arr[k][l] == arr[r - 1][c - 1])
                        continue;
                    ans++; // 중간점 2
                }
            }
        }
    }
    
    cout << ans;
    return 0;
}