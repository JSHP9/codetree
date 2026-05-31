#include <iostream>
#include <algorithm>

using namespace std;

class Human {
public:
    int n, a;
    Human() {}
    Human(int num, int arr) {
        this -> n = num;
        this -> a = arr;
    }
};

bool cmp(Human a, Human b) {
    if (a.n == b.n)
        return a.a < b.a;
    return a.n < b.n;
}

int main() {
    int n;
    cin >> n;
    int num;
    Human h[n];
    for (int i = 0; i < n; ++i) {
        cin >> num;
        h[i] = Human(num, i + 1);
    }
    sort(h, h + n, cmp);
    int ans[n + 1];
    for (int i = 0; i < n; ++i) {
        ans[h[i].a] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i + 1] << " ";
        }
    return 0;
}