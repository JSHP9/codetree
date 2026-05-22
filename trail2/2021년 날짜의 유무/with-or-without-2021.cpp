#include <iostream>
using namespace std;

bool CheckDay(int m, int d) {
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

int main() {
    int m, d;
    cin >> m >> d;
    if(CheckDay(m ,d)) 
        cout << "Yes";
    else
        cout << "No";
    return 0;
}