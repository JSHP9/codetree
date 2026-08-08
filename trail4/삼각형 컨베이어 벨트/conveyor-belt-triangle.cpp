#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> v(3 * n);
    for (int i = 0; i < 3 * n; ++i)
        cin >> v[i];

    for (int i = 0; i < t; ++i) {
        int tmp = v[3 * n - 1];

        for (int j = 3 * n - 1; j > 0; --j) {
            v[j] = v[j - 1];
        }
        v[0] = tmp;
    }

    for (int i = 0; i < 3 * n; ++i) {
        if (i != 0 && i % n == 0)
            cout << "\n";

        cout << v[i] << " ";
    }
    
    return 0;
}