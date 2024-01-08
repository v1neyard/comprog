#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<int> n;
    int x, cnt = 0, found = 0;
    while (cin >> x){
        cnt++;
        if (n.count(x)){
            found = 1;
            break;
        }
        else n.insert(x);
        if (found) break;
    }
    if (found) cout << cnt;
    else cout << "-1";
    return 0;
}