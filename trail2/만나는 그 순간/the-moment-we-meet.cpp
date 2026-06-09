#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, t;
    vector<int> a(1, 0), b(1, 0);
    cin >> n >> m;
    char dir;
    for (int i = 0; i < n; ++i) {
        cin >> dir >> t;
        for (int j = 0; j < t; ++j) {
            if (dir == 'R')
                a.push_back(a.back() + 1);
            else
                a.push_back(a.back() - 1);
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> dir >> t;
        for (int j = 0; j < t; ++j) {
            if (dir == 'R')
                b.push_back(b.back() + 1);
            else
                b.push_back(b.back() - 1);
        }
    }
    int range = min(a.size(), b.size());
    for (int i = 1; i < range; ++i) {
        if (a[i] == b[i]) {
            cout << i;
            return 0;
        }

    }
    cout << -1;
    return 0;
}