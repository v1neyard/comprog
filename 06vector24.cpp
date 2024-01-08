#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector< pair<double, string> > v, cnt;
    while (getline(cin, s)){
        if (s=="END") break;
        for (int i=0; i<s.size(); i++)
            if (s[i]==' '){
                pair<double, string> x;
                x.second = s.substr(0, i);
                x.first = stod(s.substr(i+1));
                v.push_back(x);
                x.first = 0;
                cnt.push_back(x);
                break;
            }
    }
    getline(cin, s);
    s += ' ';
    for (int i=0; i<s.size(); i++)
        if (s[i]!=' ')
            for (int j=i+1; j<s.size(); j++)
                if (s[j]==' '){
                    string temp = s.substr(i, j-i);
                    for (int i=0; i<cnt.size(); i++)
                        if (cnt[i].second==temp){
                            cnt[i].first++;
                            break;
                        }
                    i = j;
                    break;
                }
    int sale = 1;
    for (int i=0; i<v.size(); i++)
        v[i].first *= cnt[i].first*(-1);
    sort(v.begin(), v.end());
    for (int i=0; i<v.size() && i<3; i++)
        if (v[i].first!=0){
            cout << v[i].second << " " << v[i].first*(-1) << endl;
            sale = 0;
        }
    if (sale) cout << "No Sales";
    return 0;
}