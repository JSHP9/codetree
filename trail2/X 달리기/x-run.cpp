#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int T = 1;

    while (true) {
        int maxDist = T + (T - 1) * (T - 1) / 4;

        if (maxDist >= X) {
            cout << T;
            break;
        }

        T++;
    }

    return 0;
}