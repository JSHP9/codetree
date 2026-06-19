#include <iostream>
using namespace std;

bool check(int i) {
    int cnt1 = 0, a;
    int arr[10] = {};
    while (i) {
        a = i % 10;
        arr[a]++;
        cnt1++;
        i /= 10;
    }
    for (int i = 0; i < 10; ++i) {
        if (arr[i] == cnt1 - 1)
            return 1;
    }
    return 0;
}

int main() {
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = x; i <=y; ++i) {
        bool interestNum = check(i);
        if (interestNum)
            cnt++;
    }
    cout << cnt;
    return 0;
}