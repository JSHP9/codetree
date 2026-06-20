#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    for (int len = 1; len <= n; ++len) {
        set<string> s;
        bool duplicated = false;

        for (int i = 0; i + len <= n; ++i) {
            string sub = str.substr(i, len);
            if (s.count(sub)) {
                duplicated = true;
                break;
            }
            s.insert(sub);
        }
        if (!duplicated) {
            cout << len;
            return 0;
        }
    }
    return 0;
}