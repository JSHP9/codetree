#include <iostream>
using namespace std;

int main() {
    int month1, day1;
    int month2, day2;
    int elapsed_days = 0;
    bool after = false;

    cin >> month1 >> day1 >> month2 >> day2;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    if (month1 - month2 > 0)
        after = true;
    else if (month1 - month2 == 0 && day1 - day2 > 0)
        after = true;

    while (true) {
        if (month1 == month2 && day1 == day2) {
            int idx = (elapsed_days % 7 + 7) % 7;
            cout << week[idx];
            break;
        }

        if (after) {
            elapsed_days--;   
            day2++;

            if (day2 > num_of_days[month2]) {
                month2++;
                day2 = 1;
            }
        }
        else {
            elapsed_days++;   
            day2--;

            if (day2 < 1) {
                month2--;
                day2 = num_of_days[month2];
            }
        }
    }

    return 0;
}