#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    int ans = 0;
    for (int i = 0; i < len; i++) {
        string b = a;
        b[i] = (b[i] == '0' ? '1' : '0');
        int val = 0;
        for (char c : b)
            val = val * 2 + (c - '0');

        ans = max(ans, val);
    }
    cout << ans;
    return 0;
}