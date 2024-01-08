#include <bits/stdc++.h>
using namespace std;
int main(){
    string k,a;
    int cnt=0,c=1;
    getline(cin, k);
    getline(cin, a);
    if (k.size()!=a.size()){
        cout << "Incomplete answer";
        c--;
    }
    for (int i=0; i<k.size(); i++)
        if (k[i]==a[i])
            cnt++;
    if (c) cout << cnt;
    return 0;
}