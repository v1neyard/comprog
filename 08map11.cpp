#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, string> name;
    int n;
    cin >> n;
    while (n--){
        string x, y;
        cin >> x >> y;
        name[x] = y;
        name[y] = x;
    }
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        if (name.find(s)!=name.end()) cout << name[s] << "\n";
        else cout << "Not found\n";
    }
    return 0;
}