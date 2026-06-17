#include <iostream>
using namespace std;

bool check(int i, int j, int k, int arr, int f, int s) {
    int a = arr / 100;
    int b = (arr / 10) % 10;
    int c = arr % 10;
    int cntF = 0, cntS = 0;
    if (a == i) {cntF++;}
    else if (a == j || a == k) {cntS++;} 
    if (b == j) {cntF++;}
    else if (b == i || b == k) {cntS++;}
    if (c == k) {cntF++;}
    else if (c == i || c == j) {cntS++;}
    return cntF == f && cntS == s;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int f[n], s[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i] >> f[i] >> s[i];

    int cnt = 0;
    bool flag = false;
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            for (int k = 1; k < 10; ++k) {
                flag = false;
                if (i != j && j != k && k != i)
                    flag = true;
                    for (int l = 0; l < n; ++l) {
                        if (i != j && j != k && k != i) {
                            if (!check(i, j, k, arr[l], f[l], s[l])) {
                                flag = false;
                                break;
                            }
                                
                        }
                    }
                if (flag)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}