#include <bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cin >> h;
    int b = h*2-1, l = h, r = h, f = h;
    for (int i=1; i<=h; i++){
        if (i==h)
            while (b--)
                cout << "*";
        else {
            for (int j = 1; j<=f; j++){
                if (j==l || j==r)
                    cout << "*";
                else cout << ".";
            }
            f++;
            l--;
            r++;
            cout << "\n";
        }
    }
    return 0;
}