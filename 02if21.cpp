#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n;
    cin >> n;
    int x = (int)log10(n) + 1;
    if (x<4) cout << n;
    else if (x<7){
        if (x==4) cout << round(((double)n/1000)*10.0)/10.0 << "K";
        else cout << round(((double)n/1000)) << "K";
    }
    else if (x<10){ 
        if (x==7) cout << round(((double)n/1000000)*10.0)/10.0 << "M";
        else cout << round(((double)n/1000000)) << "M";
    }
    else{
        n /= 1000000;
        if (x==10) cout << round(((double)n/1000)*10.0)/10.0 << "B";
        else cout << round(((double)n/1000)) << "B";
    }
    return 0;
}