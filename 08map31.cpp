#include <bits/stdc++.h>
using namespace std;
int main(){
    double t, n;
    cin >> t;
    string s;
    map<string, double> m;
    map<string, string> ans;
    map< double, pair<string, vector<string> > > id;
    while (t--){
        cin >> s >> n;
        m[s] = n;
    }
    cin >> t;
    while (t--){
        vector<string> v(4);
        cin >> s >> n;
        for (int i=0; i<4; i++)
            cin >> v[i];
        id[(-1)*n] = make_pair(s, v);
    }
    for (auto itr=id.begin(); itr!=id.end(); itr++)
        for (auto e : (*itr).second.second)
            if (m.find(e)!=m.end() && m[e]){
                ans[(*itr).second.first] = e;
                m[e]--;
                break;
            }
    for (auto itr=ans.begin(); itr!=ans.end(); itr++)
        cout << (*itr).first << " " << (*itr).second << endl;
    return 0;
}