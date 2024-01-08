#include <bits/stdc++.h>
using namespace std;
int main(){
    string w,s;
    int cnt=0;
    getline(cin, w);
    getline(cin, s);
    while (1){
        int pos = s.find(w);
        if (pos==-1)
            break;
        char x = s[pos + w.size()];
        char y = s[pos-1];
        if (x=='"' || x=='(' || x==')' || x==',' || x=='.' || x==39 || x=='/' || x==' ' || pos+w.size()==s.size())
            if (y=='"' || y=='(' || y==')' || y==',' || y=='.' || y==39 || y=='/' || y==' ' || pos==0)
                cnt++;
        s[pos] = w[0] + 1;
    }
    cout << cnt;
    return 0;
}