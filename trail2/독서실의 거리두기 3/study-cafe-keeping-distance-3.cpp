#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < N; i++) {
        if (s[i] == '1') continue;

        s[i] = '1';

        int prev = -1;
        int mn = 999999;

        for (int j = 0; j < N; j++) {
            if (s[j] == '1') {
                if (prev != -1)
                    mn = min(mn, j - prev);
                prev = j;
            }
        }

        ans = max(ans, mn);

        s[i] = '0';
    }

    cout << ans;
}