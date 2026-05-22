#include <iostream>
using namespace std;

void Compare(int& a, int& b) {
    if (a > b) {
        a += 25;
        b *= 2;
    }
    else if (a < b) {
        a *= 2;
        b += 25;
    }

}

int main() {
    int a, b;
    cin >> a >> b;
    Compare(a, b);
    cout << a << " " << b;
    return 0;
}