#include <bits/stdc++.h>
using namespace std;
int main(){
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int d,m,y,n,ok=0;
    cin >> d >> m >> y;
    y -= 543;
    if (y%4==0) ok=1;
    if (y%100==0) ok=0;
    if (y%400==0) ok=1;
    if (ok) month[1]++;
    d += 45;
    while (d>month[m-1]){
            d -= month[m-1];
            m++;
            if (m>12){
                m-=12;
                y++;
            }
    }
    cout << d << "/" << m << "/" << y+543;
    return 0;
}