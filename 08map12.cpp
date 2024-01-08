#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    map<string, string> m;
    string s, x, y, z;
    while (n--){
        cin >> x >> y >> z;
        x += ' ' + y;
        m[x] = z;
        m[z] = x;
    }
    cin >> n;
    cin.ignore();
    while (n--){
        getline(cin, s);
        if (m.find(s)!=m.end()) cout << s << " --> " << m[s] << "\n";
        else cout << s << " --> Not found\n";
    }
    return 0;
}