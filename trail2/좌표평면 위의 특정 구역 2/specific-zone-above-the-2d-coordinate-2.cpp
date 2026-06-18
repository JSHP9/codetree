#include <iostream>
#include <utility>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> pos[n];
    for (int i = 0; i < n; ++i) 
        cin >> pos[i].first >> pos[i].second;

    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int mxX = INT_MIN, mnX = INT_MAX;
        int mxY = INT_MIN, mnY = INT_MAX;
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            mxX = max(mxX, pos[j].first);
            mnX = min(mnX, pos[j].first);
            mxY = max(mxY, pos[j].second);
            mnY = min(mnY, pos[j].second);
        }
        ans = min(ans, (mxX - mnX) *(mxY - mnY));
    }
    cout << ans;
    return 0;
}