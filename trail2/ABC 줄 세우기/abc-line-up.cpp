#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char abc[n];
    for (int i = 0; i < n; ++i)
        cin >> abc[i];
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (abc[j] == 'A' + i) {
                while (true) {
                    if (j == i)
                        break;
                    char temp = abc[j - 1];
                    abc[j - 1] = abc[j];
                    abc[j] = temp;
                    j--;
                    sum++;
                }
                break;
            }
        }
    }
    cout << sum;
    return 0;
}