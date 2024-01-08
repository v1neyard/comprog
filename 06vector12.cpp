#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(1,n);
    while (n!=1){
        if (n%2) n = 3*n + 1;
        else n /= 2;
        v.push_back(n);
    }
    if (v.size()<15)
        for (int i=0; i<v.size(); i++){
            if (!i) cout << v[i];
            else cout << "->" << v[i];
        }
    else
        for (int i=v.size()-15; i<v.size(); i++){
            if (i==v.size()-15)
                cout << v[i];
            else cout << "->" << v[i];
        }
    return 0;
}