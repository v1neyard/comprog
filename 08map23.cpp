#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, pair<int, int> > m;
    vector<pair <pair<int, int>, string> > v;
    string a, b, c, d;
    while (cin >> a >> b >> c >> d){
        int min, sec;
        for (int i=0; i<d.size(); i++)
            if (d[i]==':'){
                min = stoi(d.substr(0,i));
                sec = stoi(d.substr(i+1));
            }
        if (m.find(c)==m.end()) m[c] = make_pair(min, sec);
        else {
            m[c].first += min;
            m[c].second += sec;
            if (m[c].second>59){
                m[c].first++;
                m[c].second %= 60;
            }
        }
    }
    for (auto itr = m.begin(); itr != m.end(); itr++)
        v.push_back(make_pair((*itr).second, (*itr).first));
    sort(v.begin(), v.end());
    for (int i=v.size()-1; i>=0; i--){
        if (i==v.size()-4) break;
        cout << v[i].second << " --> " << v[i].first.first << ":" << v[i].first.second << "\n";
    }
    return 0;
}