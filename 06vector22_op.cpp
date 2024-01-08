#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<int> v;
    vector< vector<int> > s;
    string str;
    getline(cin, str);
    int num, cnt, m = 0;
    istringstream temp(str);
    while (temp >> num)
        v.push_back(num);
    v.push_back(-1);
    for (int i=0; i<v.size()-1; i++){
        cnt = 0;
        for (int j=i; j<v.size(); j++){
            if (v[i]==v[j]) cnt++;
            else {
                vector<int> u(3);
                u[0] = v[i]; u[1] = i; u[2] = i+cnt;
                s.push_back(u);
                m = max(m, cnt);
                i = j - 1;
                break;
            }
        }
    }
    sort(s.begin(), s.end());
    for (int i=0; i<s.size(); i++)
        if (s[i][2]-s[i][1]==m)
            cout << s[i][0] << " --> x[ " << s[i][1] << " : " << s[i][2] << " ]\n";
    return 0;
}