#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos[n][2];
    int counting[n];
    for (int i = 0; i < n; ++i) {
        cin >> pos[i][0] >> pos[i][1];
        counting[i] = 0;
    }
    
    int cnt = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (pos[j][0] < pos[i][0] && pos[i][1] < pos[j][1]) {
                counting[i]++;
                counting[j]++;
                continue;
            }
            if (pos[i][0] < pos[j][0] && pos[j][1] < pos[i][1]) {
                counting[i]++;
                counting[j]++;
                continue;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (counting[i] == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}