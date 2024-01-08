#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if (s.size()==10){
        string n = s.substr(0,2);
        if (n=="06" || n=="08" || n=="09") cout << "Mobile number";
        else cout << "Not a mobile number";
    }
    else cout << "Not a mobile number";
    return 0;
}