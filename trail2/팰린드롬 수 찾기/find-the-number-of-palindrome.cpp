#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int i) {
    int n = i;
    int reverse = 0;

    while (n > 0) {
        int digit = n % 10; 
        reverse = reverse * 10 + digit; 
        n /= 10; 
    }
    if (i == reverse)
        return 1;
    return 0;
}

int main() {
    int x, y; 
    cin >> x >> y;
    bool ch;
    int cnt = 0;
    for (int i = x; i <= y; ++i) {
        ch = isPalindrome(i);
        if (ch)
            cnt++;
    }
    cout << cnt;
    return 0;
}