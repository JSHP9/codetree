#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int x1, x2;
    for (int i = 0; i < 2; ++i) {
        cin >> x1 >> x2;
        --x1, --x2;
        vector<int> tmp;
        for (int j = 0; j < arr.size(); ++j) {
            if (j < x1 || x2 < j)
                tmp.push_back(arr[j]); 
        }
        arr = tmp;
    }
    cout << arr.size() << "\n";
    for (auto x : arr)
        cout << x << "\n";
    return 0;
}