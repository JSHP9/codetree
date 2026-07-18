#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(')
            st.push(i);
        else {
            if (st.empty()) {
                cout << "No";
                return 0;
            }
            st.pop();
        }
    }
    if (st.empty())
        cout << "Yes";
    else
        cout << "No";
    return 0;
}