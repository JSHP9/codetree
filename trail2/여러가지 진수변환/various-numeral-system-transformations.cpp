#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int digits[20];
    int cnt = 0;

    while (true) {
        if (n < m) {
            digits[cnt] = n;
            break;
        }

        digits[cnt++] = n % m;
        n /= m;
    }

    for (int i = cnt; i >= 0; --i)
        cout << digits[i];
}
