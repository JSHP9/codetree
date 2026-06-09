#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int u, t;
    vector<int> a(1, 0), b(1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> u >> t;
        for (int j = 0; j < t; ++j)
            a.push_back(a.back() + u);
    }
    for (int i = 0; i < m; ++i) {
        cin >> u >> t;
        for (int j = 0; j < t; ++j)
            b.push_back(b.back() + u);
    }
    int range = min(a.size(), b.size());
    int cnt = -1;
    bool flagA = true, flagB = true;
    for (int i = 1; i < range; ++i) {
        if (a[i] > b[i] && flagA) {
            cnt++;
            flagA = false;
            flagB = true;
        }
        if (a[i] < b[i] && flagB) {
            cnt++;
            flagA = true;
            flagB = false;
        }
    }
    if (cnt == -1)
        cnt = 0;
    cout << cnt;
    return 0;
}