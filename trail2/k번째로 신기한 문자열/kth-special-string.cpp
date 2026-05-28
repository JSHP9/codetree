#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    string t;
    cin >> n >> k >> t;
    string word;
    string str[n];
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int flag = true;
        cin >> word;
        for (int j = 0; j < t.length(); ++j) {
            if (word[j] != t[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            str[cnt] = word;
            cnt++;
        }
    }
    sort(str, str + cnt);
    cout << str[k - 1];
    return 0;
}