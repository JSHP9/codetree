#include <iostream>
#include <utility>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<char, int> arr[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i].first >> arr[i].second;
    int sumA = 0, sumB = 0;
    int cnt = 0, state = 2, prev = 2;
    for (int i = 0; i < n; ++i) {
        if (arr[i].first == 'A') 
            sumA += arr[i].second;
        
        else 
            sumB += arr[i].second;
        
        if (sumA > sumB)
            state = 0;
        else if (sumA < sumB)
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