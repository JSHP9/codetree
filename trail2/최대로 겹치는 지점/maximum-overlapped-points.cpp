#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1, x2;
    int arr[200] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> x1 >> x2;
        for (int j = x1; j <= x2; ++j) {
            arr[j + 100]++;
        }
    }
    int max = 0;
    for (int i = 0; i < 200; ++i)
        if (max < arr[i])
            max = arr[i];
    cout << max;
    return 0;
}