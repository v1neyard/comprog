#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        if (i%2) swap(a[i], b[i]);
    }
    string s;
    cin >> s;
    sort(a, a+n);
    sort(b, b+n);
    if (s=="Zig-Zag") cout << a[0] << " " << b[n-1];
    else cout << b[0] << " " << a[n-1];
    return 0;
}