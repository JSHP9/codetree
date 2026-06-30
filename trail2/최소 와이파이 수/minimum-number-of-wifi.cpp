#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n + 1];
    for (int i = 1; i <= n; ++i) 
        cin >> arr[i];
    
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < min(i + m*2 + 1, n + 1); ++j) {
            if (arr[j] == 1) {
                cnt++;
                i = j + m*2;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}