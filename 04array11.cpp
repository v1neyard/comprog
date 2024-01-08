#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int arr[10], c = 1;
    for (int i=0; i<10; i++)
        arr[i] = 1;
    getline(cin, s);
    for (int i=0; i<s.size(); i++)
        if (s[i]>=48 && s[i]<=57)
            arr[s[i]-48] = 0;
    for (int i=0; i<10; i++)
        if (arr[i]){
            if (c){
                cout << i;
                c=0;
            }
            else cout << "," << i;
            c = 0;
        }
    if (c) cout << "None";
    return 0;
}