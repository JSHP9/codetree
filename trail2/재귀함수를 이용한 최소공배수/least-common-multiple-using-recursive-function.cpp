#include <iostream>

using namespace std;

int n;
int arr[10];

int GCD(int a, int b)
{
    if (b == 0)
        return a;

    return GCD(b, a % b);
}

int LCM(int arr[], int n)
{
    if (n == 0)
        return arr[0];

    int prev = LCM(arr, n - 1);

    return (prev * arr[n]) / GCD(prev, arr[n]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << LCM(arr, n - 1);

    return 0;
}