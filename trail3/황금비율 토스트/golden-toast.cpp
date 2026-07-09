#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    list<char> l;
    char c;
    for (int i = 0; i < n; ++i) 
        l.push_back(s[i]);
    
    list<char>::iterator it;
    it = l.end();
    char cc;
    for (int i = 0; i < m; ++i) {
        cin >> cc;
        if (cc == 'L') {
            if (it == l.begin())
                continue;
            it--;
        }
        if (cc == 'R') {
            if (it == l.end())
                continue;
            it++;
        }
        if (cc == 'D') {
            if (it != l.end()) {
                it = l.erase(it);
            }
        }
        if (cc == 'P') {
            cin >> c;
            l.insert(it, c);
        }
    }
    for (char a : l)
        cout << a;
}