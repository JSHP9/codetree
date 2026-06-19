#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

int main() {
    int t, a, b;
    cin >> t >> a >> b;
    pair<char, int> pos[t];
    for (int i = 0; i < t; ++i) 
        cin >> pos[i].first >> pos[i].second;

    int ans = 0;
    int disN, disS;
    for (int i = a; i <= b; ++i) {
        disN = 10000, disS = 10000;
        for (int j = 0; j < t; ++j) {
            if (pos[j].first == 'S') {
                int dS = abs(pos[j].second - i);
                disS = min(disS, dS);
            }
            if (pos[j].first == 'N') {
                int dN = abs(pos[j].second - i);
                disN = min(disN, dN);
            }
        }
        if (disS <= disN) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}