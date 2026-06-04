#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int start = 11 * 24 * 60 + 11 * 60 + 11;
    int end = a * 24 * 60 + b * 60 + c;

    if (end - start < 0) {
        cout << -1;
        return 0;
    }

    cout << end - start;
    
    return 0;
}
