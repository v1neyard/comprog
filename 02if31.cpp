#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,days,c1 = 0,c2 = 0;
    cin >> a >> b >> c >> d >> e >> f;
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    days = 1 - a;
    for (int i=b-1; i<12; i++)
        days += month[i];
    days += (f-c-1)*365;
    days += d-1;
    for (int i=0; i<e-1; i++)
        days += month[i];
    c -= 543, f -= 543;
    if (c%4==0) c1=1;
    if (c%100==0) c1=0;
    if (c%400==0) c1=1;
    if (c1){
        days++;
        if (b>2) days--;
        else if (b==2 && a==19) days--;
    }
    if (f%4==0) c2=1;
    if (f%100==0) c2=0;
    if (f%400==0) c2=1;
    if (c2){
        days++;
        if (e<=2) days--;
    }
    cout << days << " " << round(sin(2*M_PI*days/23)*100.0)/100.0 << " ";
    cout << round(sin(2*M_PI*days/28)*100.0)/100.0 << " " << round(sin(2*M_PI*days/33)*100.0)/100.0;
    return 0;
}