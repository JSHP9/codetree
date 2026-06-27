#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int n[3] = {a, b, c};
    sort(n, n + 3);

    a = n[0];
    b = n[1];
    c = n[2];

    if (b - a == 1 && c - b == 1)
        cout << 0;
    else if (b - a == 2 || c - b == 2)
        cout << 1;
    else
        cout << 2;

    return 0;
}