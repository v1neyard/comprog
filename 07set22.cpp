#include <bits/stdc++.h>
using namespace std;
void u(vector< set<int> > v){
    set<int> set;
    for (int i=0; i<v.size(); i++)
        for (auto itr = v[i].begin(); itr != v[i].end(); itr++)
            set.insert(*itr);
    cout << "U:";
    for (auto e : set) cout << " " << e;
    cout << endl;
    return;
}
void i(vector< set<int> > v){
    set<int> set = v[0];
    for (auto itr = v[0].begin(); itr != v[0].end(); itr++)
        for (int i=1; i<v.size(); i++)
            if (!v[i].count(*itr))
                set.erase(*itr);
    cout << "I:";
    if (!set.size()) cout << " empty set";
    else 
        for (auto e : set) cout << " " << e;
    cout << endl;
    return;
}
void d(vector< set<int> > v){
    set<int> set = v[0];
    for (int i=1; i<v.size(); i++)
        for (auto itr = v[i].begin(); itr != v[i].end(); itr++)
            set.erase(*itr);
    cout << "D:";
    if (!set.size()) cout << " empty set";
    else 
        for (auto e : set) cout << " " << e;
    cout << endl;
    return;
}
int main(){
    string x;
    vector< set<int> > v;
    while (getline(cin, x)){
        if (!x.size()) break;
        x += ' ';
        set<int> s;
        for (int i=0; i<x.size()-1; i++)
            if (x[i]!=' ')
                for (int j=i+1; j<x.size(); j++)
                    if (x[j]==' '){
                        int temp = stoi(x.substr(i, j-i));
                        s.insert(temp);
                        i = j;
                        break;
                    }
        v.push_back(s);
    }
    u(v);
    i(v);
    d(v);
    return 0;
}