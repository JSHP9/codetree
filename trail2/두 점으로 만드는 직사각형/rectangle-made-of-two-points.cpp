#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
    int minX = min(min(x1, x2), min(a1, a2));
    int minY = min(min(y1, y2), min(b1, b2));
    int maxX = max(max(x1, x2), max(a1, a2));
    int maxY = max(max(y1, y2), max(b1, b2));
    cout << (maxX - minX) * (maxY - minY);
    return 0;
}