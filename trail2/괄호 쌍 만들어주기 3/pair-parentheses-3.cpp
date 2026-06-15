#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n.length(); ++i) {
        if (n[i] == '(') {
            for (int j = i + 1; j < n.length(); ++j) {
                if (n[j] == ')')
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}