#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int ans = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = x; j <= y; ++j) {
            int sum = 0;
            int n = j;
            while (n) {
                sum += n % 10;
                n /= 10;
            }
            ans = max(ans, sum);
        }
    }
    cout << ans;
    return 0;
}