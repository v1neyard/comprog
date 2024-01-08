#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int m, n, ans = 0;
    cin >> m >> n;
    int sm = to_string(m).size(), sn = to_string(n).size();
    if (sm==sn)
        ans += (n - m + 1)*sm;
    else {
        ans += ((long long int)pow(10, sm) - m)*sm;
        ans += (n - (long long int)pow(10, sn - 1) + 1)*sn;
        for (int i = sm + 1; i<sn; i++)
            ans += ((long long int)pow(10, i) - (long long int)pow(10, i-1))*i;
    }
    cout << ans;
    return 0;
}