#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos[n][2];
    for (int i = 0 ; i < n; ++i) 
        cin >> pos[i][0] >> pos[i][1];
    
    int ans = INT_MAX;
    int area1, area2, area3, area4;
    for (int x = 2; x <= 100; x += 2) {
        for (int y =2; y <= 100; y += 2) {
            area1 = area2 = area3 = area4 = 0;
            for (int k = 0; k < n; ++k) {
                if (y < pos[k][0] && x < pos[k][1])
                    area1++;
                else if (pos[k][0] < y && x < pos[k][1])
                    area2++;
                else if (pos[k][0] < y && pos[k][1] < x)
                    area3++;
                else if (y < pos[k][0] && pos[k][1] < x)
                    area4++;
            }
            int m1 = max(area1, area2);
            int m2 = max(area3, area4);
            int m = max(m1, m2);
            ans = min(ans, m);
        }
    }
    cout << ans;
    return 0;
}