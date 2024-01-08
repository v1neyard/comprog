#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, double> m;
    map<string, double> sale;
    vector< pair<double, string> > v;
    string s;
    double d, sum = 0, ms = 0;
    while (n--){
        cin >> s >> d;
        m[s] = d;
    }
    cin >> n;
    while (n--){
        cin >> s >> d;
        if (m.find(s)!=m.end()){
            sum += m[s]*d;
            if (sale.find(s)==sale.end())
                sale[s] = 0;
            sale[s] += m[s]*d;
        }
    }
    for (auto itr = sale.begin(); itr != sale.end(); itr++){
        v.push_back(make_pair((*itr).second*(-1), (*itr).first));
        ms = max(ms, (*itr).second);
    }
    if (!sum) cout << "No ice cream sales";
    else {
        cout << "Total ice cream sales: " << sum << endl;
        cout << "Top sales:";
        sort(v.begin(), v.end());
        for (int i=0; i<v.size(); i++){
            if (v[i].first*(-1)!=ms) break;
            cout << " " << v[i].second;
        }
    }
    return 0;
}