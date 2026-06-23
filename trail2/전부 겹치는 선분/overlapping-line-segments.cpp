#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos[n][2];
    for (int i = 0; i < n; ++i)
        cin >> pos[i][0] >> pos[i][1];
    int arr[101] = {};
    for (int i = 0; i < n; ++i) {
        for (int j = pos[i][0]; j <= pos[i][1]; ++j) {
            arr[j]++;
            if (arr[j] == n) {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}