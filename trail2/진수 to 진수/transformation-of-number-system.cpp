#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int binary[20] = {};
    int cnt = 0;
    while (true) {
        if (n < a) {
            binary[cnt] = n;
            break;
        }
        binary[cnt++] = n % 10;
        n /= 10;
    }
    int num = 0;
    
    for(int i = cnt; i >= 0; --i)
        num = num * a + binary[i];

    int cnt1 = 0;
    int digits[20] = {};
    while (true) {
        if (num < b) {
            digits[cnt1] = num;
            break;
        }
        digits[cnt1++] = num % b;
        num /= b;
    }

    for (int i = cnt1; i >= 0; --i) 
        cout << digits[i];
    
}
