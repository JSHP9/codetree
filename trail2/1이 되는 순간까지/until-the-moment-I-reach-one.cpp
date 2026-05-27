#include <iostream>
using namespace std;

int cnt;

int OddAndEven(int n) {
    if (n == 1)
        return cnt;
        
    cnt++;
    if (n % 2 == 0)
        return OddAndEven(n / 2);
    else
        return OddAndEven(n / 3);
}

int main() {
    int n;
    cin >> n;
    cout << OddAndEven(n);
    return 0;
}