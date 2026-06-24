#include <iostream>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    char c[101];
    int u[101];

    for (int i = 1; i <= M; i++)
        cin >> c[i] >> u[i];

    if (u[P] == 0)
        return 0;

    int idx = P;
    while (idx > 1 && u[idx - 1] == u[P])
        idx--;

    bool read[26] = {};
    for (int i = idx; i <= M; i++)
        read[c[i] - 'A'] = true;

    for (int i = 0; i < N; i++) {
        if (!read[i])
            cout << char('A' + i) << ' ';
    }

    return 0;
}