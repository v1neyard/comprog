#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    map<string, double> m;
    m["THB"] = 1;
    string s;
    double d;
    cin >> n;
    while(n--){
        cin >> s >> d;
        m[s] = d;
    }
    cin >> x >> s;
    string cur = s;
    cout << x << " " << s;
    while (cin >> s){
        x = int(x*m[cur]/m[s]);
        cout << " -> " << x << " " << s;
        cur = s;
    }
    return 0;
}