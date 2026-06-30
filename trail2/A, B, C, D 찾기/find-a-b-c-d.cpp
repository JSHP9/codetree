#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[15];
    for (int i = 0; i < 15; ++i) 
        cin >> arr[i];

    sort(arr, arr + 15);
    int a = arr[0];
    int abcd = arr[14];
    int bcd = abcd - a;

    for (int i = 0; i < 13; ++i) {
        for (int j = i + 1; j < 14; ++j) {
            for (int k = j + 1; k < 15; ++k) {
                if (arr[i] + arr[j] + arr[k] == bcd && arr[j] <= a + arr[i]) {
                    cout << a << " " << arr[i] << " " << arr[j] <<  " " << arr[k];
                    return 0;
                }
            }
        }
    }
    return 0;
}