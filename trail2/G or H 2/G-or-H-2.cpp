#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    char sign;
    pair<int, char> arr[101];
    for (int i = 0; i < 101; i++) {
        arr[i] = {0, ' '};
    }
    for (int i = 0; i < n; i++) 
        cin >> arr[i].first >> arr[i].second;
    int ans = 0;
    int cntG = 0, cntH = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        cntG = 0, cntH = 0;
        for (int j = i; j < n; ++j) {
            if (arr[j].second == 'G') 
                cntG++;
            if (arr[j].second == 'H') 
                cntH++;
            if (cntH == 0 || cntG == 0 || cntH == cntG) 
                ans = max(ans, arr[j].first - arr[i].first);
        }
    }
    cout << ans;
    return 0;
}