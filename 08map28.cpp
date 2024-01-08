#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    map<string, vector<string> > m;
    string s;
    while (n--){
        getline(cin, s);
        for (int i=0; i,s.size(); i++)
            if (s[i]==','){
                string x = s.substr(0, i);
                if (m.find(x)==m.end())
                    m[x] = vector<string>();
                m[x].push_back(s.substr(i+2));
                break;
            }
    }
    getline(cin, s);
    s += ',';
    int pos = 0;
    for (int i=0; i<s.size(); i++)
        if (s[i]==','){
            string x = s.substr(pos, i-pos);
            int f = 1;
            cout << x << " ->";
            auto itr = m.find(x);
            if (itr!=m.end()){
                for (auto e : (*itr).second){
                    if (f){
                        cout << " " << e;
                        f = 0;
                    }
                    else cout << ", " << e;
                }
                cout << "\n";
            }
            else cout << " Not found\n";
            pos = i+2;
            i = pos;
        }
    return 0;
}                                                       