#include <bits/stdc++.h>
using namespace std;
int solve(int a, int k, int m){
    if (!k) return 1;
    else if (k%2) return (a*(int)pow(solve(a,k/2,m),2))%m;
    else return (int)pow(solve(a,k/2,m),2)%m;
}
int main(){
    int a, k, m, ans;
    cin >> a >> k >> m;
    cout << solve(a,k,m);
    return 0;
}