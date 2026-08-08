#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    int r,c,l1,l2,l3,l4,t;
    cin >> r >> c >> l1 >> l2 >> l3 >> l4 >> t;

    r--; c--;

    int dx[4] = {-1, -1, 1, 1};
    int dy[4] = {1, -1, -1, 1};

    vector<pair<int,int>> path;

    int row = r, col = c;
    path.push_back({row, col});

    int len[4] = {l1, l2, l3, l4};

    for(int d = 0; d < 4; d++){
        for(int k = 0; k < len[d]; k++){
            row += dx[d];
            col += dy[d];
            path.push_back({row, col});
        }
    }

    path.pop_back();

    vector<int> val;
    for(auto p:path)
        val.push_back(a[p.first][p.second]);
        
    if(t==0)
        rotate(val.begin(), val.end()-1, val.end()); // 반시계
    else
        rotate(val.begin(), val.begin()+1, val.end()); // 시계

    for(int i=0;i<path.size();i++){
        auto [px,py]=path[i];
        a[px][py]=val[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}