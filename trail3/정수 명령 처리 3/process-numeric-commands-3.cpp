#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    deque<int> dq;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == "push_back") {
            cin >> x;
            dq.push_back(x);
        }
        if (s == "push_front") {
            cin >> x;
            dq.push_front(x);
        }
        if (s == "pop_front") {
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        if (s == "pop_back") {
            cout << dq.back() << "\n";
            dq.pop_back();
        }
        if (s == "front") {
            cout << dq.front() << "\n";
        }
        if (s == "back") {
            cout << dq.back() << "\n";
        }
        if (s == "size") {
            cout << dq.size() << "\n";
        }
        if (s == "empty") {
            cout << dq.empty() << "\n";
        }
    }
    return 0;
}