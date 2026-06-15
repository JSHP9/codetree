#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int m = INT_MAX;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        int dist = 0;
        for (int j = i; j < n + i; ++j) {
            if (j >= n) {
                sum += arr[j % n] * dist;
            }
            else {
                sum += arr[j] * dist;
            }
            dist++;
        }
        m = min(m, sum);
    }
    cout << m;
    return 0;
}