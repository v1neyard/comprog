#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y,c=0;
    cin >> d >> m >> y;
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0; i<m-1; i++) 
        d += month[i];
    y -= 543;
    if (y%4==0) c=1;
    if (y%100==0) c=0;
    if (y%400==0) c=1;
    if (c){
        d++;
        if (m<=2) d--;
    }
    cout << d; 
    return 0;
}