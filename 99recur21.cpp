#include <bits/stdc++.h>
using namespace std;
const int R = 7, C = 7;
void floodfill(vector< vector<int> > & v, int r, int c, int e){
    if (r>=0 && r<R && c>=0 && c<C && !v[r][c]){
        v[r][c] = e;
        pair<int, int> p[4] = {{-1,0}, {1,0}, {0,-1}, {0,1}};
        for (int i=0; i<4; i++)
            floodfill(v, r+p[i].first, c+p[i].second, e);
    }
    return;
}
int main() {
    vector< vector<int> > v(7, vector<int> (7));
    for (int r=0; r<R; ++r)
        for (int c=0; c<C; ++c)
            cin >> v[r][c];
    int row, col, e;
    cin >> row >> col >> e;
    floodfill(v, row, col, e);
    for (int r=0; r<R; ++r){
        for (int c=0; c<C; ++c)
            cout << v[r][c] << ' ';
        cout << endl;
    }
    return 0;
}