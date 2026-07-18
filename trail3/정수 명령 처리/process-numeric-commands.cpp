#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int n;
    cin >> n;
    string str;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            s.push(x);
        }
        if (str == "size") {
            cout << s.size() << "\n";
        }
        if (str == "empty") {
            cout << s.empty() << "\n";
        }
        if (str == "pop") {
            cout << s.top() << "\n";
            s.pop();
        }
        if (str == "top") {
            cout << s.top() << "\n";
        }
    }
    return 0;
}