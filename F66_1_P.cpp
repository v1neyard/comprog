#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, x, sum = 0;
    vector<long long> v;
    cin >> n;
    while (n--){
        cin >> x;
        sum += x;
        v.push_back(x);
    }
    cout << sum - *min_element(v.begin(), v.end()) << endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k;
    cin >> k;
    while (k--)
        solve();
    return 0;
}