#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    s += " ";
    set<int> set;
    int cnt = 0;
    for (int i=0; i<s.size(); i++)
        if (s[i]!=' ')
            for (int j=i+1; j<s.size(); j++)
                if (s[j]==' '){
                    int temp = stoi(s.substr(i, j-i));
                    if (!set.count(temp)){
                        set.insert(temp);
                        cnt++;
                    }
                    i = j;
                    break;
                }
    cout << cnt << "\n";
    if (cnt<11)
        for (int e : set)
            cout << e << " ";
    else {
        cnt = 10;
        for (auto e : set){
            if (cnt>0)
                cout << e << " ";
            else break;
            cnt--;
        }
    }
    return 0;
}