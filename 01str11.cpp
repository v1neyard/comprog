#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> v(13);
    for (int i=0; i<s.size(); i++)
        v[i] = s[i] - 48;
    v[12] = (11 - (13*v[0]+12*v[1]+11*v[2]+10*v[3]+9*v[4]+8*v[5]+7*v[6]+6*v[7]+5*v[8]+4*v[9]+3*v[10]+2*v[11])%11)%10;
    for (int i=0; i<13; i++){
        cout << v[i];
        if (i==0 || i==4 || i==9 || i==11) cout << "-";
    }
    return 0;
}