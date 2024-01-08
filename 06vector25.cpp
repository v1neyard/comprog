#include <bits/stdc++.h>
using namespace std;
int main(){
    vector< pair<string, string> > v;
    string g[] = {"F", "D", "D+", "C", "C+", "B", "B+", "A", "A"};
    string s, a, b;
    while (cin >> a){
        if (a=="q") break;
        cin >> b;
        pair<string, string> x;
        x.first = a;
        x.second = b;
        v.push_back(x);
    }
    cin.ignore();
    getline(cin, s);
    s += ' ';
    for (int i=0; i<s.size(); i++)
        if (s[i]!=' ')
            for (int j=i+1; j<s.size(); j++)
                if (s[j]==' '){
                    string temp = s.substr(i, j-i);
                    int c = 0;
                    for (int k=0; k<v.size(); k++){
                        if (v[k].first==temp)
                            for (int l=0; l<8; l++)
                                if (v[k].second==g[l]){
                                    v[k].second = g[l+1];
                                    c = 1;
                                    break;
                                }
                        if (c) break;
                    }
                    i = j;
                    break;
                }
    for (auto e : v)
        cout << e.first << " " << e.second << endl;
    return 0;
}