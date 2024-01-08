#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d, p = 1;
        string s = "";
        cin >> a >> b >> c >> d;
        if (c%2==0 || c%5==0 || ((a*b)+(c*d))%3==0) p = 0;
        else {
            char x = char(a + 48);
            char y = char(c + 48);
            for (int i=0; i<b; i++)
                s += x;
            for (int i=0; i<d; i++)
                s += y;
            long long num = stoll(s);
            long long z = (long long)sqrt(num);
            for (int i=7; i<=z; i+=2)
                if (num%i==0){
                    p=0;
                    break;
                }
        }
        if (p) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}