#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result[n - 1];
    for (int i = 0; i < n - 1; ++i)
        cin >> result[i];
    
    int prev = 0;
    for (int i = 1; i <= n; ++i) {
        int arr[n] = {};
        arr[0] = i;
        int cnt = 0;
        set<int> st;
        st.insert(i);
        bool isCheck = true;
        for (int k = 1; k < n; ++k) {
            arr[k] = result[cnt++] - arr[k - 1];
            if (st.count(arr[k]) || arr[k] < 1 || arr[k] > n) {
                isCheck = false;
                break;
            }
            st.insert(arr[k]);
        }
        if (isCheck) {
        for (int k = 0; k < n; ++k)
            cout << arr[k] << " ";
        return 0;
        }
    }
}