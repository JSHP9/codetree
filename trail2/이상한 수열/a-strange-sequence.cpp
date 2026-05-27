#include <iostream>

using namespace std;

int N;

int OddSequence(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return OddSequence(n / 3) + OddSequence(n - 1);
}

int main() {
    cin >> N;
    cout << OddSequence(N);
    return 0;
}