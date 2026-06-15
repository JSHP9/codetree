#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    int max = 0;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if (i - 1 <= j && j <= i + 1)
                continue;
            sum = arr[i] + arr[j];
            if (max < sum)
                max = sum;
        }
    }
    cout << max;
    return 0;
}