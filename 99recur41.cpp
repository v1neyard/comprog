#include <bits/stdc++.h>
using namespace std;
set<int> s[105];
short int n, a, b, x, y;
bool ok = 1;
void solve(int a, vector<int> p){
    p.push_back(a);
    if (a==b){
        ok = 0;
        for (int i=0; i<p.size(); i++){
            if (!i) cout << p[i];
            else cout << " -> " << p[i];
        }
        cout << endl;
        return;
    }
    else if (a>b) return;
    for (auto e : s[a])
        solve(e, p);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> p;
    cin >> n >> a >> b;
    while (n--){
        cin >> x >> y;
        s[x].insert(y);
    }
    solve(a, p);
    if (ok) cout << "no";
    return 0;
}