#include <iostream>
using namespace std;

int main() {
    int n, k, p, T, t; // n명 개발자, T번, k번의 악수 동안만 옮김, p는 처음 감염자, t는접촉 시간.
    cin >> n >> k >> p >> T;
    int x, y;
    pair<int, int> arr[251] = {};
    for (int i = 0; i < 250; ++i) {
        arr[i].first = -1;
        arr[i].second = -1;
    }
    for (int i = 0; i < T; ++i) {
        cin >> t >> x >> y;
        arr[t].first = x;
        arr[t].second = y;
    }

    int cntP[n + 1];
    int infection[n + 1];
    for (int i = 0; i <= n; ++i) {
        infection[i] = 0;
        cntP[i] = 0;
    }
    infection[p] = 1;

    for (int i = 0; i < 250; ++i) {
        if (arr[i].first != -1) {
            bool firstInf = infection[arr[i].first];
            bool secondInf = infection[arr[i].second];
            if (firstInf && cntP[arr[i].first] < k) {
                    infection[arr[i].second] = 1;
                    cntP[arr[i].first]++;
            }
            if (secondInf && cntP[arr[i].second] < k) {
                    infection[arr[i].first] = 1;
                    cntP[arr[i].second]++;
            }
        }
    }

    for (int i = 1; i <= n; ++i)
        cout << infection[i];
    return 0;
}