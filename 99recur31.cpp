#include <bits/stdc++.h>
using namespace std;
set<string> ans;
void permuGen(string permute, string left, int n){
    if (permute.size()==n){
        if (!ans.count(permute))
            ans.insert(permute);
        return;
    }
    for (int i=0; i<left.size(); i++){
        permute.push_back(left[i]);
        string newleft;
        for (int j=0; j<left.size(); j++)
            if (j!=i)
                newleft.push_back(left[j]);
        permuGen(permute, newleft, n);
        permute.pop_back();
    }
    return;
}
int main(){
    string s;
    cin >> s;
    string permute;
    sort(s.begin(), s.end());
    permuGen(permute, s, s.size());
    for (auto e : ans)
        cout << e << " ";
    return 0;
}