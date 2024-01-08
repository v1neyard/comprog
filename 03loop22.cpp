#include <bits/stdc++.h>
using namespace std;
int main(){
    bool c = 1;
    long long int n,x;
    cin >> n;
    x = n;
    for (int i=2; i<=n; i++){
        if (x==1) break;
        while (x%i==0){
            x/=i;
            if (c){
                cout << i;
                c = 0;
            }
            else cout << "*" << i;
        }
    }
    return 0;
}