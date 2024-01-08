#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    s += " ";
    vector<int> v, num, cnt, pos;
    for (int i=0; i<s.size(); i++)
        if (s[i]!=' ')
            for (int j=i+1; j<s.size(); j++)
                if (s[j]==' '){
                    v.push_back(stoi(s.substr(i, j-i)));
                    i = j;
                    break;
                }
    for (int i=0; i<v.size(); i++){
        num.push_back(v[i]);
        pos.push_back(i);
        int c = 0;
        for (int j=i; j<v.size(); j++){
            if (v[i]==v[j])
                c++;
            else if (v[i]!=v[j]){
                cnt.push_back(c);
                i = j-1;
                break;
            }
            if (j==v.size()-1){
                cnt.push_back(c);
                break;
            }
        }
    }
    for (int i=0; i<num.size(); i++)
        for (int j=0; j<i; j++){
            if (num[j]>num[i]){
                swap(num[i], num[j]);
                swap(pos[i], pos[j]);
                swap(cnt[i], cnt[j]);
            }
            else if (num[i]==num[j] && pos[j]>pos[i]){
                swap(num[i], num[j]);
                swap(pos[i], pos[j]);
                swap(cnt[i], cnt[j]);
            }
        }
    for (int i=0; i<num.size(); i++){
        if (cnt[i]==*max_element(cnt.begin(), cnt.begin()+cnt.size()))
            cout << num[i] << " --> x[ " << pos[i] << " : " << pos[i]+cnt[i] << " ]\n";
    }
    return 0;
}