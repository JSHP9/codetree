#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[7];
    for (int i = 0; i < 7; ++i)
        cin >> arr[i];
    sort(arr, arr + 7);
    int a = arr[0];
    int abc = arr[6];
    int bc = abc - a;
    for (int i = 1; i < 7; ++i) {
        for (int j = i + 1; j < 7; ++j) {
            if (arr[i] + arr[j] == bc) {
                cout << a << " " << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }
    return 0;
}