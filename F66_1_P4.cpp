#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a, b, x;
    cin >> a >> b;
    vector<int> u, v;
    int sa = 0, sb = 0;
    while (cin >> x){
        if (x=="*") break;
        int c, d;
        c = stoi(x.substr(0, x.find('-')));
        d = stoi(x.substr(x.find('-')+1));
        u.push_back(c);
        v.push_back(d);
        if (c>d) sa++;
        if (c<d) sb++;
    }
    if (sa>sb) a = '*' + a;
    if (sb>sa) b = '*' + b;
    cout << a << " " << sa << " [";
    for (int i=0; i<u.size(); i++) cout << " " << u[i];
    cout << " ]\n";
    cout << b << " " << sb << " [";
    for (int i=0; i<v.size(); i++) cout << " " << v[i];
    cout << " ]\n";
    return;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k;
    cin >> k;
    while (k--)
        solve();
    return 0;
}