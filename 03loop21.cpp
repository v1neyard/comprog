#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while (cin >> s){
        int w=0, x=0, y=0, z=0;
        for (int i=0; i<s.size(); i++){
            if (s[i]>='A' && s[i]<='Z') w++;
            else if (s[i]>='a' && s[i]<='z') x++;
            else if (s[i]>=48 && s[i]<=57) y++;
            else z++;
        }
        if (s.size()>=12 && w && x && y && z) cout << ">> strong" << "\n";
        else if (s.size()>=8 && w && x && y) cout << ">> weak" << "\n";
        else cout << ">> invalid" << "\n";
     }
    return 0;
}