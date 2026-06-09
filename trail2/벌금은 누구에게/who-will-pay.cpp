#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int student[n + 1] = {};
    int num;
    for (int i = 0; i < m; ++i) {
        cin >> num;
        student[num]++;
        if (student[num] >= k) {
            cout << num;
            return 0;
        }
            
    }
    cout << -1;
    return 0;
}