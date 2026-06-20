#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i <= c / a; ++i) {
        for (int j = 0; j <= c / b; ++j) {
            if ((a * i) + (j * b) <= c)
                ans = max(ans, (a * i) + (j * b));
        }
    }
    cout << ans;
    return 0;
}