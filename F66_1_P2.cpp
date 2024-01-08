#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    double n, m, p;
    cin >> n;
    string s;
    map<string, double> map;
    set<double> set;
    while (n--){
        cin >> s >> p;
        if (map.find(s)==map.end()){
            map[s] = p;
            set.insert(-1*p);
        }
        if (map.find(s)!=map.end() && p>map[s]){
            map[s] = p;
            set.insert(-1*p);
        }
    }
    cin >> m;
    for (auto e : set){
        if (m<=0) break;
        cout << -1*e;
        int count = 0;
        for (auto itr=map.begin(); itr!=map.end(); itr++)
            if ((*itr).second==-1*e){
                cout << " " << (*itr).first;
                count++;
            }
        cout << endl;
        m -= count;
    }
    return 0;
}