#include <iostream>
#include <vector>
using namespace std;

bool same(vector<int>& a, vector<int>& b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i])
            return true;
    }
    return false;
}

void shift(vector<int>& row, char dir) {
    if (dir == 'R') {
        int tmp = row.back();
        for (int i = row.size() - 1; i > 0; --i)
            row[i] = row[i - 1];
        row[0] = tmp;
    } else {
        int tmp = row[0];
        for (int i = 0; i < row.size() - 1; ++i)
            row[i] = row[i + 1];
        row.back() = tmp;
    }
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> v[i][j];
        
    int num;
    char dir;
    for (int k = 0; k < q; ++k) {
        cin >> num >> dir;
        --num;

        if (dir == 'L') dir = 'R';
        else dir = 'L';

        shift(v[num], dir);
        
        char ndir = (dir == 'R') ? 'L' : 'R';

        // 아래쪽
        int cur = num;
        char d = ndir;

        for (int i = num + 1; i < n; ++i) {
            if (!same(v[cur], v[i])) break;

            shift(v[i], d);

            cur = i;
            d = (d == 'R') ? 'L' : 'R';
        }

        // 위쪽
        cur = num;
        d = ndir;

        for (int i = num - 1; i >= 0; --i) {
            if (!same(v[cur], v[i])) break;

            shift(v[i], d);

            cur = i;
            d = (d == 'R') ? 'L' : 'R';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}