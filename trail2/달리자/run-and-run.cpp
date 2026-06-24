#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    
    int sum = 0;
    for (int j = 0; j < n - 1; ++j) {
        int temp = a[j] - b[j];
        a[j + 1] += temp;
        sum += temp;
    }
    cout << sum;
    return 0;
}