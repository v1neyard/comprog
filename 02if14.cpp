#include <bits/stdc++.h>
using namespace std;
int main(){
    double g1,g2;
    vector<string> x(5), y(5);
    x[4] = "0", y[4] = "0";
    cin >> x[0] >> g1 >> x[1] >> x[2] >> x[3];
    cin >> y[0] >> g2 >> y[1] >> y[2] >> y[3];
    if (x[1][0]=='A')
        if (x[2][0]<='C')
            if (x[3][0]<='C')
                x[4] = "1";
    if (y[1][0]=='A')
            if (y[2][0]<='C')
                if (y[3][0]<='C')
                    y[4] = "1";
    if (x[4]=="1" && y[4]=="1"){
        if (g1>g2) cout << x[0];
        else if (g1<g2) cout << y[0];
        else {
            if (x[2]>y[2]) cout << y[0];
            else if (x[2]<y[2]) cout << x[0];
            else {
                if (x[3]>y[3]) cout << y[0];
                else if (x[3]<y[3]) cout << x[0];
                else cout << "Both";
            }
        }
    }
    else if (x[4]=="1" && y[4]=="0") cout << x[0];
    else if (x[4]=="0" && y[4]=="1") cout << y[0];
    else cout << "None";
    return 0;
}