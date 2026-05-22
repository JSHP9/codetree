#include <iostream>
using namespace std;

bool IsLeapYear(int n) {
    if (n % 4 == 0) {
        if (n % 100 == 0 && n % 400 != 0)
            return false;
        return true;
    }
    return false;
}

int main() {
    int y;
    cin >> y;
    if (IsLeapYear(y))
        cout << "true";
    else
        cout << "false";
    return 0;
}