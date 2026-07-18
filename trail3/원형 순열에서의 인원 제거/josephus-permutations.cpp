#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() {
    cin >> N >> K;
    queue<int> q;
    for (int i = 1; i <= N; ++i) 
        q.push(i);
    
    int cnt = 0;
    while (q.size() != 1) {
        cnt++;
        if (cnt % K == 0) {
            cout << q.front() << " ";
            q.pop();
            continue;
        }
        else {
            q.push(q.front());
            q.pop();
        }
    }
    cout << q.front();
    return 0;
}
