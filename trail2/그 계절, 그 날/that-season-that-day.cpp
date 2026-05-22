#include <iostream>
using namespace std;

bool CheckLeapYear(int n) {
    return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

bool CheckDay(int m, int d, int y) {
    if (m == 2 && d == 29 && CheckLeapYear(y))
        return true;
    if (m == 2 && d <= 28)
        return true;
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d <=30)
            return true;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        if (d <= 31)
            return true;
    return false;
}

void CheckSeason(int m) {
    if (3 <= m && m <= 5)
        cout << "Spring";
    if (6 <= m && m <= 8)
        cout << "Summer";
    if (9 <= m && m <= 11)
        cout << "Fall";
    if (m == 12 || m <= 2)
        cout << "Winter";
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if (CheckDay(m, d, y)) {
        CheckSeason(m);
    }
    else {
        cout << -1;
    }
    return 0;
}
