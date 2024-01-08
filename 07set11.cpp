#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    vector<int> v(36);
    getline(cin, a);
    getline(cin, b);
    for (int i=0; i<a.size(); i++){
        if (a[i]>=65 && a[i]<=90)
            v[a[i]-65]++;
        else if (a[i]>=97 && a[i]<=122)
            v[a[i]-97]++;
        else if (a[i]>=48 && a[i]<=57)
            v[a[i]-22]++;
    }
    for (int i=0; i<b.size(); i++){
        if (b[i]>=65 && b[i]<=90)
            v[b[i]-65]--;
        else if (b[i]>=97 && b[i]<=122)
            v[b[i]-97]--;
        else if (b[i]>=48 && b[i]<=57)
            v[b[i]-22]--;
    }
    int ana = 1;
    for (int i=0; i<v.size(); i++)
        if (v[i]){
            ana = 0;
            break;
        }
    if (ana) cout << "YES";
    else cout << "NO";
    return 0;
}