#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n], o, f[n/2], b[n/2];
    for (int i=0; i<n; i++)
        cin >> s[i];
    cin.ignore();
    getline(cin, o);
    for (int i=0; i<o.size(); i++){
        if (o[i]=='C')
            for (int j=0; j<n/2; j++){
                string temp = s[j];
                s[j] = s[j+n/2];
                s[j+n/2] = temp;
            }
        else if (o[i]=='S'){
            for (int j=0; j<n/2; j++){
                f[j] = s[j]; 
                b[j] = s[j+n/2];
            }
            int pf = 0, pb = 0;
            for (int j=0; j<n; j++){
                if (j%2){
                    s[j] = b[pb];
                    pb++;
                }
                else {
                    s[j] = f[pf];
                    pf++;
                }
            }
        }
    }
    for (int i=0; i<n; i++)
        cout << s[i] << " ";
    return 0;
}