#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m;
    vector<int> a(1, 0), b(1, 0);
    char dir;
    for (int i = 0; i < n; ++i) {
        cin >> l >> dir;
        for (int j = 0; j < l; ++j) {
            if (dir == 'R')
                a.push_back(a.back() + 1);
            else
                a.push_back(a.back() - 1);
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> l >> dir;
        for (int j = 0; j < l; ++j) {
            if (dir == 'R')
                b.push_back(b.back() + 1);
            else
                b.push_back(b.back() - 1);
        }
    }
    int max = (a.size() > b.size()) ? a.size() : b.size();
    (a.size() > b.size()) ? b.resize(max, b.back()) : a.resize(max, a.back());
    int cnt = 0;
    for (int i = 1; i < max; ++i) {
        if (a[i] == b[i] && a[i - 1] != b[i - 1]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}