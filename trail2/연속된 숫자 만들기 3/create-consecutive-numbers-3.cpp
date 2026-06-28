#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    cout << max(arr[1] - arr[0], arr[2] - arr[1]) - 1;

    return 0;
}