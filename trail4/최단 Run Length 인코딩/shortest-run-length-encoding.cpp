#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();
    int ans = 10000;

    for (int i = 0; i < len; ++i) {
        char tmp = s[len - 1];
        for (int j = len - 1; j > 0; --j)
            s[j] = s[j - 1];
        s[0] = tmp;

        string cmp;
        int cnt = 1;

        for (int j = 0; j < len - 1; ++j) {
            if (s[j] == s[j + 1]) {
                cnt++;
            } else {
                cmp += s[j];
                cmp += to_string(cnt);
                cnt = 1;
            }
        }

        cmp += s[len - 1];
        cmp += to_string(cnt);

        ans = min(ans, (int)cmp.length());
    }

    cout << ans;
    return 0;
}