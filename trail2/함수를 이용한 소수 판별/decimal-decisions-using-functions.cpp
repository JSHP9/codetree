#include <iostream>
using namespace std;

bool IsPrime(int n) {
    int prime;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0)
        return false;
    }
    return true;
}

int main() {
    int a, b, prime = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (IsPrime(i))
            prime += i;
    }
    cout << prime;
    return 0;
}