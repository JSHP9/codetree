#include <iostream>

using namespace std;

int n, m;
int A[100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int sum = 0;
    while (true) {
        if (m == 1) {
            sum += A[0];
            break;
        }
        if (m % 2 == 0) {
            sum += A[m - 1];
            m /= 2;
        }
        else {
            sum += A[m - 1];
            m--;
        }
    }
    cout << sum;

    return 0;
}