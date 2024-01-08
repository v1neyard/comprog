#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, found = 1;
    cin >> n;
    string id, s;
    vector< pair<string, set<string> > > v;
    while (n--){
        cin >> id;
        pair<string, set<string> > p;
        p.first = id;
        p.second = set<string>();
        while (cin >> s){
            if (s=="*") break;
            p.second.insert(s);
        }
        v.push_back(p);
    }
    cin >> id;
    for (int i=0; i<v.size(); i++)
        if (id==v[i].first){
            for (int j=0; j<v.size(); j++)
                if (i!=j)
                    for (auto e : v[i].second)
                        if (v[j].second.count(e)){
                            cout << ">> " << v[j].first << "\n";
                            found = 0;
                            break;
                        }
            break;
        }
    if (found) cout << ">> Not Found";
    return 0;
}