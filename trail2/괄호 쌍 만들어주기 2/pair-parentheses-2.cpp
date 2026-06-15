#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    int ans = 0;;
    for (int i = 1; i < len; ++i) {
        if (a[i] == '(' && a[i - 1] == '(') {
            for (int j = i + 1; j < len - 1; ++j) {
                if (a[j] == ')' && a[j + 1] == ')')
                    ans++;
            }
        }
    }
    cout << ans;
    return 0;
}