#include <iostream>
using namespace std;

int main() {
    int n, m, d, s; // 사람 수 ,치즈 수, 먹은 기록 수, 아픈 기록 수 
    cin >> n >> m >> d >> s;
    int people[d], cheese[d], eatT[d];
    for (int i = 0; i < d; ++i)
        cin >> people[i] >> cheese[i] >> eatT[i];
    int patient[s], sickT[s];
    for (int i = 0; i < s; ++i)
        cin >> patient[i] >> sickT[i];
    int cnt = 0, ans = 0;
    bool ate = false;
    for (int i = 0; i < m; ++i) {
        cnt = 0;
        bool check = true;
        for (int j = 0; j < s; ++j) {
            ate = false;
            for (int k = 0; k < d; ++k) {
                if (patient[j] == people[k] && eatT[k] < sickT[j] && cheese[k] == i + 1) {
                    ate = true;
                }
            }
            if (!ate) {
                check = false;
                break;
            }
        }
        if (check) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < d; ++k) {
                    if (people[k] == j + 1 && cheese[k] == i + 1) {
                        cnt++;
                        break;
                    }
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans;
    return 0;
}