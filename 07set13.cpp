#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<string> w, l;
    while(getline(cin, s)){
        if (!s.size()) break;
        for (int i=0; i<s.size(); i++)
            if (s[i]==' '){
                w.insert(s.substr(0, i));
                l.insert(s.substr(i+1));
                break;
            }
    }
    int f = 1;
    for (auto itr = w.begin(); itr != w.end(); itr++){
        if (l.count(*itr)) continue;
        cout << *itr << " ";
        f = 0;
    }
    if (f) cout << "None";
    return 0;
}