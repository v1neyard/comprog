#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, mp = 0, ms = 0, sum = 0;
    cin >> n;
    vector<int> v(n), pre(n), suf(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
        mp = max(mp, v[i]);
        pre[i] = mp; 
    }
    for (int i=n-1; i>=0; i--){
        ms = max(ms, v[i]);
        suf[i] = ms;
    }
    for (int i=0; i<n; i++){
        if (v[i]>=min(pre[i], suf[i])) continue;
        sum += min(pre[i], suf[i])-v[i];
    }
    cout << sum;
    return 0;
}