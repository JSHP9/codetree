#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int overlap = max(0, min(b, d) - max(a, c));
    cout << (b - a) + (d - c) - overlap;
    return 0;
}