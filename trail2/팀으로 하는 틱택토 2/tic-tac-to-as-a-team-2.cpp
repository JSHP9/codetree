#include <iostream>
using namespace std;

bool check[10][10] = {};
int cnt = 0;

void checkOverlap(int arr[]) {
    bool flag = true;
    int arrMin = -1, arrMax = -1;

    for (int l = 1; l < 10; ++l) {
        if (flag && arr[l]) {
            arrMin = l;
            flag = false;
        }
        else if (!flag && arr[l]) {
            arrMax = l;
        }
    }

    if (!check[arrMin][arrMax]) {
        check[arrMin][arrMax] = true;
        cnt++;
    }
}

int main() {
    int n;
    int board[3][3];

    for (int i = 0; i < 3; ++i) {
        cin >> n;
        board[i][2] = n % 10;
        board[i][1] = (n / 10) % 10;
        board[i][0] = (n / 10) / 10;
    }

    for (int j = 0; j < 3; ++j) {
        int row[10] = {}, column[10] = {};
        int cntRow = 0, cntColumn = 0;

        for (int k = 0; k < 3; ++k) {
            row[board[j][k]]++;
            column[board[k][j]]++;
        }

        for (int k = 1; k < 10; ++k) {
            if (row[k])
                cntRow++;

            if (column[k])
                cntColumn++;
        }

        if (cntRow == 2)
            checkOverlap(row);

        if (cntColumn == 2)
            checkOverlap(column);
    }

    int diagonal1[10] = {}, diagonal2[10] = {};

    for (int i = 0; i < 3; ++i) {
        diagonal1[board[i][i]]++;
        diagonal2[board[i][2 - i]]++;
    }

    int cntDiagonal1 = 0, cntDiagonal2 = 0;

    for (int k = 1; k < 10; ++k) {
        if (diagonal1[k])
            cntDiagonal1++;

        if (diagonal2[k])
            cntDiagonal2++;
    }

    if (cntDiagonal1 == 2)
        checkOverlap(diagonal1);

    if (cntDiagonal2 == 2)
        checkOverlap(diagonal2);

    cout << cnt;
    return 0;
}