#include <bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin >> y;
    y -= 543;
    y = y - (y/1000)*1000 - ((y/100)%10)*100;
    cout << (y+y/4+11)%7;
    return 0;
}