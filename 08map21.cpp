#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    map<string, vector<string> > m;
    vector<string> v;
    while (cin >> a >> b){
        if (m.find(b)==m.end()){
            m[b] = vector<string>();
            v.push_back(b);
        }
        m[b].push_back(a);
    }
    for (int i=0; i<v.size(); i++){
        auto itr = m.find(v[i]);
        cout << (*itr).first << ":";
        for (auto e : (*itr).second)
            cout << " " << e;
        cout << endl;
    }
    return 0;
}