#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    string s, aeiou = "aeiou";
    getline(cin, s);
    s += " ";
    int pos = 0, p1, p2;
    for (int i=0; i<s.size(); i++)
        if (s[i]==' '){
            v.push_back(s.substr(pos, i-pos));
            pos = i + 1;
        }
    for (int i=0; i<v[0].size(); i++)
        if (aeiou.find(v[0][i])!=-1){
            p1 = i;
            break;
        }
    for (int i=0; i<v[v.size()-1].size(); i++)
        if (aeiou.find(v[v.size()-1][i])!=-1){
            p2 = i;
            break;
        }
    string a = v[0], b = v[v.size()-1];
    v[0] = a.substr(0, p1) + b.substr(p2);
    v[v.size()-1] = b.substr(0, p2) + a.substr(p1);
    for (string e : v)
        cout << e << " ";
    return 0;
}