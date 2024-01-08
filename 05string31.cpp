#include <bits/stdc++.h>
using namespace std;
string s, a, b, temp;
map<string, string> m;
void D(string b){
    string d;
    for (int i=0; i<b.size(); i++){
        if (b[i]>=65 && b[i]<=90)
            d += '0';
        else if (b[i]>=97 && b[i]<=122)
            d += '1';
    }
    for (int i=0; i<d.size(); i+=4)
        cout << m[d.substr(i, 4)];
    cout << endl;
    return;
}
void E(string b){
    string e, ans;
    for (int i=0; i<b.size(); i++)
        e += m[b.substr(i, 1)];
    for (int i=0; i<e.size(); i++){
        if (!(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)){
            ans.push_back(s[i]);
            s.erase(s.begin()+i);
            i--;
        }
        else if (e[i]=='0') ans.push_back(toupper(s[i]));
        else ans.push_back(tolower(s[i]));
        if (i==s.size()-1) s += temp;
    }
    cout << ans << endl;
    s = temp;
    return;
}
int main(){
    m["0000"] = "0"; m["0001"] = "1"; m["0010"] = "2"; m["0011"] = "3"; m["0100"] = "4"; m["0101"] = "5"; 
    m["0110"] = "6"; m["0111"] = "7"; m["1000"] = "8"; m["1001"] = "9"; m["1010"] = "-"; m["1011"] = ",";
    for (auto itr=m.begin(); itr!=m.end(); itr++)
        m[(*itr).second] = (*itr).first;
    getline(cin, s);
    temp = s;
    while (cin >> a){
        cin.ignore();
        getline(cin, b);
        if (a=="D") D(b);
        if (a=="E") E(b);
    }
    return 0;
}