#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n>0) cout << "positive" << "\n";
    else if (n<0) cout << "negative" << "\n";
    else cout << "zero" << "\n";
    if (abs(n)%2) cout << "odd";
    else cout << "even";
    return 0;
}