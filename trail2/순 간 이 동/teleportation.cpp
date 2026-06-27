#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int plan1 = abs(b - a);
    int plan2 = abs(a - x) + abs(y - b);
    int plan3 = abs(a - y) + abs(x - b);

    int cmp = min(plan1, plan2);
    int ans = min(cmp, plan3);
    cout << ans;
    return 0;
}