#include <iostream>
#include <tuple>

using namespace std;

int main() {
    string goods;
    int code;

    cin >> goods >> code;

    tuple<string, int> info = make_tuple(goods, code);
    tuple<string, int> d = make_tuple("codetree", 50);

    cout << "product " << get<1>(d) << " is " << get<0>(d) << "\n";
    cout << "product " << get<1>(info) << " is " << get<0>(info) << "\n";

    return 0;
}