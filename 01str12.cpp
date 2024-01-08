#include <bits/stdc++.h>
using namespace std;
int main(){
    string month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    string s;
    cin >> s;
    int d = 10*(s[0]-48)+s[1]-48;
    int m = 10*(s[3]-48)+s[4]-48;
    int y = 1000*(s[6]-48)+100*(s[7]-48)+10*(s[8]-48)+s[9]-48-543;
    cout << month[m-1] << " " << d << ", " << y;
    return 0;
}