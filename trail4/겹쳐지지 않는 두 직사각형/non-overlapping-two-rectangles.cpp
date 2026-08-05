#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int grid[5][5];

struct Rect{
    int r1, c1, r2, c2;
    int sum;
};

bool Overlap(Rect A, Rect B)
{
    if (A.r2 < B.r1 || B.r2 < A.r1)
        return false; // 위아래로 안 겹침

    if (A.c2 < B.c1 || B.c2 < A.c1)
        return false; // 좌우로 안 겹침

    return true; // 그 외에는 겹침
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = INT_MIN;
    vector<Rect> rects;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int a = i; a < n; ++a)
                for (int b = j; b < m; ++b) {
                    int sum = 0;

                    for (int x = i; x <= a; ++x) {
                        for (int y = j;  y <= b; ++y) {
                            sum += grid[x][y];
                        }
                    }
                    rects.push_back({i, j, a, b, sum});
                }
        }
    }
    for (int i = 0; i < rects.size(); ++i) {
        for (int j = i + 1; j < rects.size(); ++j) {
            if (!Overlap(rects[i], rects[j]))
                ans = max(ans, rects[i].sum + rects[j].sum);
        }
    }
    cout << ans;
    return 0;
}
