#include <iostream>
using namespace std;

int OddAndEven(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    if (n % 2 == 0)
        return OddAndEven(n - 2) + n;
    else 
        return OddAndEven(n - 2) + n;
}

int main() {
    int n;
    cin >> n;
    cout << OddAndEven(n);
    return 0;
}