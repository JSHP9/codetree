#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int grid[n][m];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
            cin >> grid[i][j];

    int block1 = 0;
    for (int i = 0; i < n; ++i) // ㅡ
        for (int j = 0; j < m - 2; ++j)
            block1 = max(block1, grid[i][j] + grid[i][j + 1] + grid[i][j + 2]);
            
    for (int j = 0; j < m; ++j)  // I
        for (int i = 0; i < n - 2; ++i)
            block1 = max(block1, grid[i][j] + grid[i + 1][j] + grid[i + 2][j]);
    
    int block2 = 0;
    for (int i = 0; i < n - 1; ++i) // r
        for (int j = 0; j < m - 1; ++j)
            block2 = max(block2, grid[i][j] + grid[i + 1][j] + grid[i][j + 1]);  
    for (int i = 0; i < n - 1; ++i) // ㄱ
        for (int j = 0; j < m - 1; ++j)
            block2 = max(block2, grid[i][j] + grid[i][j + 1] + grid[i + 1][j + 1]);  
    for (int i = 0; i < n - 1; ++i) // ㄴ
        for (int j = 0; j < m - 1; ++j)
            block2 = max(block2, grid[i][j] + grid[i + 1][j] + grid[i + 1][j + 1]);  
    for (int i = 0; i < n - 1; ++i) // j
        for (int j = 0; j < m - 1; ++j)
            block2 = max(block2, grid[i][j + 1] + grid[i + 1][j] + grid[i + 1][j + 1]);  

    cout << max(block2, block1);

    return 0;
}