#include <iostream>
using namespace std;

class Player {
public:
    int l;
    string i;
    
    Player(string id = "codetree", int level = 10) {
        this -> i = id;
        this -> l = level;
    }
};

int main() {
    string id;
    int level;
    cin >> id >> level;
    
    Player p1 = Player();
    Player p2 = Player(id, level);
    cout << "user " << p1.i << " lv " << p1.l << "\n";
    cout << "user " << p2.i << " lv " << p2.l << "\n";
    return 0;
}