#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if (n%2){
        int sa = 0, sb = 0, sc = 0, m = 0;
        while (m<k){
            int a, b, c;
            cin >> a >> b >> c;
            if (a==b){
                if (a==b && b==c){
                    if (a+b>k){
                        sa++;
                        sb+=2;
                        sc-=3;
                    }
                    else {
                        sa-=3;
                        sb-=2;
                        sc++;
                    }
                }
                else {
                    sa+=2;
                    sb-=3;
                }
            }
            m++;
        }
        cout << sa << " " << sb << " " << sc;
    }
    else {
        int s, t;
        cin >> s >> t;
        int x = s, y = t;
        if (s>t){
            x = s-t;
        }
        else if (s<t){
            y = 2*(t-s);
        }
        if (x+y>k){
            swap(x, y);
            x = y + s*s;
        }
        cout << x << " " << y;
    }
    return 0;
}