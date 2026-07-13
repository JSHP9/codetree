#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> v2;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v2.push_back(x);
    }

    int m = 0;
    for (int i = 0; i < n; ++i) 
        m = max(m, v2[i]);
    
    for (int exp = 1; m / exp > 0; exp *= 10) {
        vector<vector<int>> v(10);
        for (int i = 0; i < n; ++i) {
            int digit = (v2[i] / exp) % 10;
            v[digit].push_back(v2[i]);
        }

        vector<int> v3;
        for (int i = 0; i < 10; ++i)
            for (int j = 0; j < v[i].size(); ++j)
                v3.push_back(v[i][j]);
            
        v2 = v3;
    }

    for (int i = 0; i < n; ++i)
        cout << v2[i] << " ";

    return 0;
}