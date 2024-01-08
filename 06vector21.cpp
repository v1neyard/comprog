#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    s += '$';
    vector<string> v;
    for (int i=0; i<s.size(); i++){
        v.push_back(s);
        char x = s[0];
        s = s.substr(1) + x;
    }
    sort(v.begin(), v.begin()+v.size());
    for (int i=0; i<v.size(); i++)
        cout << v[i][v.size()-1];
    return 0;
}