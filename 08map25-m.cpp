#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, c = 0;
    cin >> n;
    string s, x;
    map<string, set<string> > m;
    map<string, bool> b;
    vector<string> v;
    while (n--){
        cin >> s;
        v.push_back(s);
        b[s] = 0;
        while (cin >> x){
            if (x=="*") break;
            m[s].insert(x);
        }
    }
    cin >> s;
    for (auto u : v)
        for (auto e : m[s]){
            if (u==s) continue;
            if (m[u].count(e)){
                b[u] = 1;
                c = 1;
                break;
            }
        }
    if (c){
        for (auto e : v)
            if (b[e]) cout << ">> " << e << endl;
    }
    else cout << ">> Not Found";
    return 0;
}