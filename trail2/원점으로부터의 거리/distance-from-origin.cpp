#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

class Human {
public:
    int x, y, n;
    Human() {}
    Human(int posX, int posY, int num) {
        this -> x = posX;
        this -> y = posY;
        this -> n = num;
    }
};

bool cmp(Human a, Human b) {
    int distanceA = abs(a.x) + abs(a.y);
    int distanceB = abs(b.x) + abs(b.y);
    if (distanceA == distanceB)
        return a.n < b.n;
    return distanceA < distanceB;
}

int main() {
    int n;
    cin >> n;
    int posX, posY;
    Human h[n];
    for (int i = 0; i < n; ++i) {
        cin >> posX >> posY;
        h[i] = Human(posX, posY, i + 1);
    }
    sort(h, h + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << h[i].n << "\n";
    }
    return 0;
}