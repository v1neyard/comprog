#include <bits/stdc++.h>
using namespace std;
string s = "0123456789ABCDEF";
string d2x(int n){
    if (n<16) return s.substr(n,1);
    return d2x(n/16) + d2x(n%16);
}
int main(){
    int n;
    while (cin >> n){
        cout << n << " -> " << d2x(n) << endl;
    } 
    return 0;
}