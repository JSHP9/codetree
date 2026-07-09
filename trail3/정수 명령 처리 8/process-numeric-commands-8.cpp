#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    string s;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == "push_back") {
            cin >> x;
            l.push_back(x);
        }
        if (s == "push_front") {
            cin >> x;
            l.push_front(x);
        }
        if (s == "pop_back") {
            cout << l.back() << "\n";
            l.pop_back();
        }
        if (s == "pop_front") {
            cout << l.front() << "\n";
            l.pop_front();
        }
        if (s == "back") {
            cout << l.back() << "\n";
        }
        if (s == "front") {
            cout << l.front() << "\n";
        }
        if (s == "size")
            cout << l.size() << "\n";
        if (s == "empty")
            cout << l.empty() << "\n";
    }
    return 0;
}