#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n * 2];
    for (int i = 0; i < n * 2; ++i)
        cin >> arr[i];

    sort(arr, arr + (n * 2));
    long long m = LLONG_MAX;
    for (int i = 0; i < n; ++i) 
        m = min(m, arr[i + n] - arr[i]);
    
    cout << m;
    return 0;
}