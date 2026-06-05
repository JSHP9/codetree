#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int binary[20] = {};
    int cnt = 0;
    while (true) {
        if (n < 2) {
            binary[cnt] = n;
            break;
        }
        binary[cnt++] = n % 10;
        n /= 10;
    }
    int num = 0;
    
    for(int i = cnt; i >= 0; --i)
        num = num * 2 + binary[i];
    
    cout << num;
}
