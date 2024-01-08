#include <bits/stdc++.h>
using namespace std;
bool ok = 0;
vector<int> v[1005];
vector<int> visited(1005);
void solve(int a, int b){
    if (a==b){ 
        ok = 1;
        return;
    }
    else if (a>b) return;
    visited[a] = 1;
    for (auto e : v[a]){
        if (visited[e]) continue;
        solve(e, b);
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, x, y;
    cin >> n >> a >> b;
    while (n--){
        cin >> x >> y;
        v[x].push_back(y);
    }
    solve(a, b);
    if (ok) cout << "yes";
    else cout << "no";
    return 0;
}