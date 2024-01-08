#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, cur;
    map< string, set<string> > m;
    set<string> a;
    while (getline(cin, s)){
        int c = 1;
        for (int i=0; i<s.size(); i++)
            if (s[i]==' '){
                string x = s.substr(0, i);
                string y = s.substr(i+1);
                if (m.find(x)==m.end())
                    m[x] = set<string>();
                if (m.find(y)==m.end())
                    m[y] = set<string>();
                m[x].insert(y);
                m[y].insert(x);
                c = 0;
                break;
            }
        if (c) {
            cur = s;
            a.insert(cur);
            break;
        }
    }
    if (m.find(cur)!=m.end()){
        auto itr = m.find(cur);
        for (auto e : (*itr).second)
            a.insert(e);
        set<string> temp = a;
        for (auto e : temp){
            auto i = m.find(e);
            for (auto v : (*i).second)
                a.insert(v);
        }
    }
    for (auto e : a)
        cout << e << endl;
    return 0;
}