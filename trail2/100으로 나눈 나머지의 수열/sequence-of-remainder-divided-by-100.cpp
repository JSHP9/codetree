#include <iostream>
using namespace std;

int Sequence(int n) {
    if (n == 1) 
        return 2;
    if (n == 2)
        return 4;
    return (Sequence(n - 1) * Sequence(n - 2)) % 100;

}

int main() {
    int n;
    cin >> n;
    cout << Sequence(n);
    return 0;
}