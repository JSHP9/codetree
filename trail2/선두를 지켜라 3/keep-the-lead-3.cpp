#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];
int pos1[1000001], pos2[1000001];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
    }
    int idx = 1;
    int cur = 0;
    int sumV = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < t[i]; j++) {
            cur += v[i];
            pos1[idx++] = cur;
        }
        sumV += t[i];
    }

    idx = 1;
    cur = 0;
    int sumV2 = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < t2[i]; j++) {
            cur += v2[i];
            pos2[idx++] = cur;
        }
        sumV2 += t2[i];
    }

    int min = (sumV > sumV2) ? sumV2 : sumV;
    int cnt = 0;
    int state = 2, now = 0;
    for (int i = 1; i <= min; ++i) {
        if (pos1[i] > pos2[i]) now = 0;
        else if (pos1[i] < pos2[i]) now = 1;
        else now = 2;
        if (state != now) {
            cnt++;
            state = now;
        }
    }
    cout << cnt;
    return 0;
}