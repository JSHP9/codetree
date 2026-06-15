#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int max = -1, sum = -10;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int a = arr[i];
                int b = arr[j];
                int c = arr[k];
                while (true) {
                    if (a % 10 + b % 10 + c % 10 >= 10)
                        break;
                    if (a < 10 && b < 10 && c < 10) {
                        sum = arr[i] + arr[j] + arr[k];
                        break;
                    }
                    a /= 10;
                    b /= 10;
                    c /= 10;
                }
                if (max < sum)
                    max = sum;
            }
        }
    }
    cout << max;
    return 0;
}