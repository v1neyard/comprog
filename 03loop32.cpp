#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s, c = "YGNBPK";
    getline(cin, s);
    int score = 0, pos = 0, ok = 1;
    for (int i=0; i<s.size(); i+=2){
        if (i%4==0){
            if (s[i]=='R'){
                score++;
                continue;
            }
            else if (s[i]=='Y'){
                if (i==0) ok = 0;
                for (int j=i; j<s.size(); j+=2){
                    if (s[j]==c[pos]){
                        score += pos + 2;
                        pos++;
                        if (pos>6){
                            ok = 0;
                            break;
                        }
                    }
                    else ok = 0;
                }
                break;
            }
            else ok = 0;
        }
        else {
            if (s[i]=='R') ok = 0;
            score += c.find(s[i]) + 2;
        }
        if (!ok) break;
    }
    if (ok) cout << score << "\n";
    else cout << "WRONG_INPUT\n";
    return;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        solve();
    }
    return 0;
}