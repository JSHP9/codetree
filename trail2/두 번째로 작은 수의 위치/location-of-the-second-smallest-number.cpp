#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> v;
    int cpy[n];
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
        cpy[i] = x;
    }
    
    sort(v.begin(), v.end());
    int ch = v[0], cmp = 0;
    for (int i = 0; i < n; ++i) {
        if (!cmp && ch != v[i]) {
            cmp = v[i];
            continue;
        }
        if (v[i] == cmp) {
            cout << -1;
            return 0;
        }
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    if (v.size() < 2) {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        if (v[1] == cpy[i]) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}