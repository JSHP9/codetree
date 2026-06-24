#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pos[11];
    for (int i = 0; i <= 10; i++)
        pos[i] = -1;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int bird, side;
        cin >> bird >> side;

        if (pos[bird] == -1) {
            pos[bird] = side;
        }
        else {
            if (pos[bird] != side)
                answer++;

            pos[bird] = side;
        }
    }

    cout << answer;
}