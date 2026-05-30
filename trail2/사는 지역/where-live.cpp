#include <iostream>
#include <tuple>

using namespace std;

class Location {
public:
    string c, n, r;
    Location() {}
    Location(string name, string call, string region) {
        this -> n = name;
        this -> c = call;
        this -> r = region;
    }
};

int main() {
    int n;
    string call, name, region;
    cin >> n;
    Location l[n];
    int max = 0;
    for (int i = 0; i < n; ++i) {
        cin >> name >> call >> region;
        l[i] = Location(name, call, region);
        if (i != 0) {
            max = (l[i].n > l[max].n) ? i : max;
        }
    }

    cout << "name " << l[max].n << "\n";
    cout << "addr " << l[max].c << "\n";
    cout << "city " << l[max].r << "\n";
    return 0;
}