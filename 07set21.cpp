#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, cnt = 0;
    cin >> k;
    cin.ignore();
    string s;
    getline(cin, s);
    s += ' ';
    multiset<int> n;
    for (int i=0; i<s.size()-1; ++i)
        if (s[i]!=' ')
            for (int j=i+1; j<s.size(); ++j)
                if (s[j]==' '){
                    int temp = stoi(s.substr(i, j-i));
                    int w = k - temp;
                    if (n.count(w)){
                        cnt++;
                        n.erase(w);
                    }
                    else n.insert(temp);
                    i = j;
                    break;
                }
    cout << cnt;
    return 0;
}