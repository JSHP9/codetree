#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

int checkHorizon(pair<int, int> a, pair<int, int> b, pair<int,int> c) {
    if  (a.second == b.second && b.second == c.second && c.second == a.second)
        return 0;
    if  (a.second == b.second)
        return abs(a.first - b.first);
    if  (a.second == c.second)
        return abs(a.first - c.first);
    if  (c.second == b.second)
        return abs(c.first - b.first);
    return 0;
}

int checkVertical(pair<int, int> a, pair<int, int> b, pair<int,int> c) {
    if  (a.first == b.first && b.first == c.first && c.first == a.first)
        return 0;
    if  (a.first == b.first)
        return abs(a.second - b.second);
    if  (a.first == c.first)
        return abs(a.second - c.second);
    if  (c.first == b.first)
        return abs(c.second - b.second);
    return 0;
}

int main() {
    int n;
    cin >> n;
    pair<int, int> pos[n];
    for (int i = 0; i < n; ++i)
        cin >> pos[i].first >> pos[i].second;
    int ans = 0;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int height = checkHorizon(pos[i], pos[j], pos[k]);
                int len = checkVertical(pos[i], pos[j], pos[k]);
                if (height && len) {
                    ans = max(ans, height * len);
                }
            }
        }
    }
    cout << ans;
    return 0;
}