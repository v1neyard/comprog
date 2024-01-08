#include <bits/stdc++.h>
using namespace std;
int main(){
    double u, d, t;
    cin >> u >> d >> t;
    double h = (t - u*sin(d*M_PI/180)/10)*(u*sin(d*M_PI/180) + 5*(t - 3*u*sin(d*M_PI/180)/10));
    double r = u*cos(d*M_PI/180)*t;
    cout << round(h*10)/10 << " " << round(r*10)/10;
    return 0;
}