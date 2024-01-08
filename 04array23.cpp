#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    string s[n], t, a, b;
    int fee[n];
    for (int i=0; i<n; i++)
        cin >> s[i] >> fee[i];
    cin.ignore();
    getline(cin, t);
    for (int i=11; i<t.size(); i+=7){
        a = t.substr(i, 2);
        b = t.substr(i-7, 2);
        if (a!=b)
            for (int j=0; j<n; j++)
                if (a==s[j]){
                    sum += fee[j];
                    break;
                }
    }
    cout << sum;
    return 0;
}