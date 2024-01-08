#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s, c = "YGNBPK";
    getline(cin, s);
    int score = 0, pos = 0;
    for (int i=0; i<s.size(); i+=2){
        if (i%4==0){
            if (s[i]=='R'){
                score++;
                if (i+1 == s.size()){
                    cout << score << "\n";
                    return;
                }
                continue;
            }
            else if (s[i]=='Y'){
                if (i==0){
                    cout << "WRONG_INPUT\n";
                    return;
                }
                for (int j=i; j<s.size(); j+=2){
                    if (s[j]==c[pos]){
                        score += pos + 2;
                        pos++;
                    }
                    else {
                        cout << "WRONG_INPUT\n";
                        return;
                    }
                }
                cout << score << "\n";
                return;
            }
            else {
                cout << "WRONG_INPUT\n";
                return;
            }
        }
        else {
            if (s[i]=='R'){
                cout << "WRONG_INPUT\n";
                return;
            }
            score += c.find(s[i]) + 2;
            if (i%2==0 && i%4!=0 && i+1==s.size()){
                cout << score << "\n";
                return;
            }
        }
    }
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