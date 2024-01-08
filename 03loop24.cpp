#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char x = s[0];
    int cnt = 0;
    for (int i=0; i<s.size(); i++){
        if (x==s[i]) cnt++;
        else {
            cout << x << " " << cnt << " ";
            x = s[i];
            cnt = 1;
        }
        if (i==s.size()-1) cout << x << " " << cnt;
    }
    return 0;
}