#include <iostream>
#include <utility>
using namespace std;

bool dist(int i, int a, int n) {
    int d = abs(a - i);
    d = min(d, n - d);
    return d <= 2;
}

int main() {
    int n;
    int arr1[3], arr2[3];
    cin >> n;

    for (int i = 0; i < 3; ++i)
        cin >> arr1[i];
    for (int i = 0; i < 3; ++i)
        cin >> arr2[i];

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (dist(i, arr1[0], n) && dist(j, arr1[1], n) && dist(k, arr1[2], n))
                    cnt++;
                else if (dist(i, arr2[0], n) && dist(j, arr2[1], n) && dist(k, arr2[2], n))
                    cnt++;
            }
        }
        
    }
    cout << cnt;
    return 0;
}