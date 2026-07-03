#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x;
    string str;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str == "push_back") {
            cin >> x;
            v.push_back(x);
        }
        if (str == "get") {
            cin >> x;
            cout << v[x - 1] << "\n";
        }
        if (str == "size") {
            cout << v.size() << "\n";
        }
        if (str == "pop_back") {
            v.pop_back();
        }
    }
}