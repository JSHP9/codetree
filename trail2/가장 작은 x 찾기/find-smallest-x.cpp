#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i] >> b[i];

    int check = true;
    for (int i = 1; i <= 5000 / n; ++i) {
        int x = i;
        check = true;
        for (int j = 0; j < n; ++j) {
            x *= 2;
            if (x < a[j] || b[j] < x) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << i;
            return 0;
        }
    }
    return 0;
}