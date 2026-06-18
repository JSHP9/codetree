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
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int x1, x2, y1, y2;
            for (int k = 0; k < n; ++k) {
                if (k == i) {
                    x1 = pos[k].first;
                    y1 = pos[k].second;
                }
                if (k == j) {
                    x2 = pos[k].first;
                    y2 = pos[k].second;
                }
            }
            ans = min(ans, (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        }
    }
    cout << ans;
    return 0;
}