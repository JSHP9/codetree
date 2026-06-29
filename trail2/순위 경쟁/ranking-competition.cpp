#include <iostream>
#include <utility>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<char, int> arr[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i].first >> arr[i].second;
    int sumA = 0, sumB = 0, sumC = 0;
    int cnt = 0, state = 3, prev = 3;
    bool ch = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i].first == 'A') {
            sumA += arr[i].second;
        }
        else if (arr[i].first == 'B') {
            sumB += arr[i].second;
        }
        else {
            sumC += arr[i].second;
        }
        int best = max(sumA, max(sumB, sumC));

        if (sumA == best && sumB == best && sumC == best)
            state = 3;      
        else if (sumA == best && sumB == best)
            state = 4;     
        else if (sumA == best && sumC == best)
            state = 5;     
        else if (sumB == best && sumC == best)
            state = 6;     
        else if (sumA == best)
            state = 0;     
        else if (sumB == best)
            state = 1;     
        else
            state = 2;     
        

        if (state != prev)
            cnt++;
        prev = state;
    }
    cout << cnt;
    return 0;
}