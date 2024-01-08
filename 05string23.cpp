#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int m;
    cin >> s >> m;
    int n1 = stoi(s.substr(0, 1));
    int s1 = s[1] - 'A';
    int s2 = s[2] - 'A';
    int n2 = stoi(s.substr(4));
    n2 += m;
    if (n2>999){
        int temp = n2/1000;
        n2 %= 1000;
        s2 += temp;
    }
    if (s2 > 25){
        int temp = s2/26;
        s2 %= 26;
        s1 += temp;
    }
    if (s1 > 25){
        int temp = s1/26;
        s1 %= 26;
        n1 += temp;
    }
    string num = to_string(n2);
    while (num.size()<3)
        num = "0" + num;
    cout << n1 << char(s1+65) << char(s2+65) << "-" << num;
    return 0;
}