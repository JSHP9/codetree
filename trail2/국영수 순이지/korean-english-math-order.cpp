#include <iostream>
#include <algorithm>

using namespace std;

class Human {
public:
    string n;
    int k, e, m;
    Human() {}
    Human(string name, int kor, int eng, int mat) {
        this -> n = name;
        this -> k = kor;
        this -> e = eng;
        this -> m = mat;
    }
};

bool cmp(Human a, Human b) {
    if (a.k == b.k) {
        if (a.e == b.e)
            return a.m >b.m;
        return a.e > b.e;
    }

    return a.k > b.k;
}

int main() {
    int n;
    cin >> n;
    string name;
    int kor, eng, mat;
    Human h[n];
    for (int i = 0; i < n; ++i) {
        cin >> name >> kor >> eng >> mat;
        h[i] = Human(name, kor, eng, mat);
    }
    sort(h, h + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << h[i].n << " " << h[i].k << " " << h[i].e << " " << h[i].m << "\n";
    }
    return 0;
}