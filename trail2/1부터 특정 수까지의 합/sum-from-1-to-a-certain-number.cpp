#include <iostream>
using namespace std;

int AddSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum / 10;
}

int main() {
    int n;
    cin >> n;
    int sum = AddSum(n);
    cout << sum;
    return 0;
}