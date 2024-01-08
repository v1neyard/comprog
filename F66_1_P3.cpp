#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    map<string ,set<string> > m;
    map<string, bool> status;
    string a, b, c;
    while (n--){
        cin >> a >> b;
        m[b].insert(a);
        status[b] = 1;
    }
    while (t--){
        cin >> c >> a >> b;
        if (c=="1"){
            for (auto itr=m.begin(); itr!=m.end(); itr++)
                if ((*itr).second.count(a)){
                    (*itr).second.erase(a);
                    break;
                }
            m[b].insert(a);
            status[b] = 1;
        }
        else if (c=="2"){
            status[b] = 1;
            status[a] = 0;
            for (auto e : m[a])
                m[b].insert(e);
            m[a].clear();
        }
    }
    for (auto itr=m.begin(); itr!=m.end(); itr++)
        if (status[(*itr).first]){
            cout << (*itr).first << ":";
            for (auto e : (*itr).second)
                cout << " " << e;
            cout << endl;
        }
    return 0;
}