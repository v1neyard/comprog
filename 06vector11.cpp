#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int cnt = 1, n;
    cin >> n;
    for (int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if (cnt%2)
            v.push_back(temp);
        else v.insert(v.begin(), temp);
        cnt++;
    }
    string s;
    cin.ignore();
    getline(cin, s);
    s += " ";
    int pos = 0;
    if (s.size()>1)
        for (int i=0; i<s.size(); i++){
            if (s[i]==' '){
                if (cnt%2)
                    v.push_back(stoi(s.substr(pos, i-pos)));
                else v.insert(v.begin(), stoi(s.substr(pos, i-pos)));
                pos = i+1;
                cnt++;
            }
        }
    int temp;
    while (cin >> temp){
        if (temp==-1) break;
        if (cnt%2)
            v.push_back(temp);
        else v.insert(v.begin(), temp);
        cnt++;
    }
    if (v.size()==0) cout << "[]";
    else
        for (int i=0; i<v.size(); i++){
            if (!i) cout << "[" << v[i];
            else cout << ", " << v[i];
            if (i==v.size()-1) cout << "]";
        }
    return 0;
}