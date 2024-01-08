#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, cnt = 0;
    string s;
    cin >> s >> k;
    s += " ";
    char x = s[0];
    for (int i=0; i<s.size(); i++){
        if (s[i] == x){
            cnt++;
        }
        else {
            if (cnt < k)
                for (int j=0; j<cnt; j++) 
                    cout << x;
            x = s[i];
            cnt = 1;
        }
    }
    return 0;
}