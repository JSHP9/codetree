#include <iostream>
using namespace std;

int main() {
    int month1, day1;
    int month2, day2;
    string w;

    cin >> month1 >> day1 >> month2 >> day2 >> w;

    int num_of_days[13] = {
        0, 31, 29, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    string week[7] = {
        "Mon", "Tue", "Wed",
        "Thu", "Fri", "Sat", "Sun"
    };

    int day_idx = 0;
    int cnt = 0;

    while (true) {
        if (week[day_idx] == w)
            cnt++;

        if (month1 == month2 && day1 == day2)
            break;

        day1++;

        if (day1 > num_of_days[month1]) {
            month1++;
            day1 = 1;
        }

        day_idx = (day_idx + 1) % 7;
    }

    cout << cnt;

    return 0;
}