#include <bits/stdc++.h>
using namespace std;
vector<string> split(string x, char y){
    vector<string> v;
    x += y;
    for (int i=0; i<x.size(); i++)
        if (x[i]!=y)
            for (int j=i+1; j<x.size(); j++)
                if (x[j]==y){
                    v.push_back(x.substr(i, j-i));
                    i = j;
                    break;
                }
    return v;
}
int main(){
    string s, d;
    getline(cin, s);
    getline(cin, d);
    for (string e : split(s, d[0]))
        cout << '(' << e << ')';
    return 0;
}