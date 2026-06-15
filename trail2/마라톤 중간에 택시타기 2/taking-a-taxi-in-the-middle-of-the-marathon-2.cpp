#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int posX[n], posY[n];
    for (int i = 0; i < n; ++i) 
        cin >> posX[i] >> posY[i];
    int ans = INT_MAX, sum = 0;

    for (int i = 1; i < n - 1; ++i) {
        sum = 0;
        int prev = 0;
        for (int j = 1; j < n; ++j) {
            if (i == j)
                continue;

            sum += abs(posX[j] - posX[prev]) + abs(posY[j] - posY[prev]);
            prev = j;
        }
        ans = min(ans, sum);
    }
    cout << ans;
    return 0;
}