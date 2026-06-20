#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos[n][2];
    for (int i = 0; i < n; ++i)
        cin >> pos[i][0] >> pos[i][1];

    for (int i = 0; i < 8; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            for (int k = j + 1; k < 10; ++k) {
                int posX[11] = {}, posY[11] = {};
                for (int l = 0; l < n; ++l) {
                    if (pos[l][0] == i || pos[l][0] == j || pos[l][0] == k) {
                        posX[pos[l][0]]++;
                    }
                    if (pos[l][1] == i || pos[l][1] == j || pos[l][1] == k)
                        posY[pos[l][1]]++;
                }
                int cnt = 0;
                for (int l = 0; l < 11; ++l) {
                    if (posX[l])
                        cnt++;
                    if (posY[l])
                        cnt++;
                }
                if (cnt == 3) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
    return 0;
}