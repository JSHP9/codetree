#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n , b;
    cin >> n >> b;
    int st[n][2];
    for (int i = 0; i < n; ++i)
        cin >> st[i][0] >> st[i][1];
    
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        vector<int> cost;
        for (int j = 0; j < n; ++j) {
            if (j == i)
                cost.push_back(st[j][0] / 2 + st[j][1]);
            else
                cost.push_back(st[j][0] + st[j][1]);
            
        }
        sort(cost.begin(), cost.end());

        int sum = 0;
        int cnt = 0;
        for (int x : cost) {
            if (sum + x > b) 
                break;
            sum += x;
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}