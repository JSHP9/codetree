#include <iostream>
using namespace std;

int AddSum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + AddSum(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << AddSum(n);
    return 0;
}