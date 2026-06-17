#include <iostream>
#include <climits>

using namespace std;

int ability[6];

int dist(int a, int b, int c) {
    int m = (a > b) ? a : b;
    int s = a + b - m;
    m = (c > m) ? c : m;
    s = (c > s) ? s : c;
    return m - s;
}

int main() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> ability[i];
        sum += ability[i];
    }

    int sumCpy = sum;
    int ans = INT_MAX;
    int t1, t2 ,t3;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                for (int l = 0; l < 5; ++l) { 
                    sum = sumCpy;
                    if (i != j && i != k && i != l && j != k && j != l && k != l) {
                        t1 = ability[i] + ability[j];
                        t2 = ability[k] + ability[l];
                        t3 = sum - t1 -t2;
                        if (t1 != t2 && t2 != t3 && t3 != t1)
                            ans = min(ans, dist(t1, t2, t3));
                    }
                }
            }
        }
    }
    if (ans == INT_MAX)
        cout << -1;
    else cout << ans;
    return 0;
}