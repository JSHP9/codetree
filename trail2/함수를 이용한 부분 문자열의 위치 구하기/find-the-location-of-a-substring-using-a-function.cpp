#include <iostream>
using namespace std;

void StringPos(string n, string m) {
    bool sequence = false;

    for (int i = 0; i <= n.length() - m.length(); ++i) {
        sequence = true;

        for (int j = 0; j < m.length(); ++j) {
            if (n[i + j] != m[j]) {
                sequence = false;
                break;
            }
        }

        if (sequence) {
            cout << i;
            return;
        }
    }

    cout << -1;
}

int main() {
    string n, m;
    cin >> n >> m;

    StringPos(n, m);

    return 0;
}