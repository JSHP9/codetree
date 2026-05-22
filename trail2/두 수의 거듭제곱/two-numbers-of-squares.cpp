#include <iostream>
using namespace std;

int Sqrt(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; ++i) 
        ans *= a;
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans = Sqrt(a, b);
    cout << ans;
    return 0;
}