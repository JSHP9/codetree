#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    for (int len = 1; len < n; ++len) {
        set<string> st;
        bool duplicated = false;
        for (int i = 0; i + len <= n; ++i) {
            string s = str.substr(i, len);
            if (st.count(s)) {
                duplicated = true;
                break;
            }
            st.insert(s);
        }
        if (!duplicated) {
            cout << len;
            return 0;
        }
    }
    return 0;
}