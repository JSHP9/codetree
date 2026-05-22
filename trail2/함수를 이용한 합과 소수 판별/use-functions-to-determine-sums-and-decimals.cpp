#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n == 1)
        return false;
    for (int i = 2; i < n; ++i)
        if (n % i == 0)
        return false;
    return true;
}

bool IsEven(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum % 2 == 0;
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if(IsPrime(i) && IsEven(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}