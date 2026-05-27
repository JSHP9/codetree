#include <iostream>
using namespace std;

int SquareNum(int n) {
    if (n < 10) 
        return n * n;
    return SquareNum(n / 10) + (n % 10) * (n % 10);
}

int main() {
    int n;
    cin >> n;
    cout << SquareNum(n);
    return 0;
}