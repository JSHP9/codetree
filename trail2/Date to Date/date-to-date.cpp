#include <iostream>
using namespace std;

int main() {
    int month1, day1;
    int month2, day2;
    int elapsed_days = 0;
    cin >> month1 >> day1;
    cin >> month2 >> day2;
    //                         1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while(true) {
        if(month1 == month2 && day1 == day2) {
            elapsed_days++;
            break;
        }
    
        elapsed_days++;
        day1++;
    
        if(day1 > num_of_days[month1]) {
            month1++;
            day1 = 1;
        }
    }
    
    cout << elapsed_days;
    
    return 0;
}
