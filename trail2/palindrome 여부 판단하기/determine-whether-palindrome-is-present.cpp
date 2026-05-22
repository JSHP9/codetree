#include <iostream>
using namespace std;

bool IsPalindrome(string a) {
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != a[a.length() - 1 - i])
            return false;
    }
    return true;
}

int main() {
    string a;
    cin >> a;
    if (IsPalindrome(a))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}