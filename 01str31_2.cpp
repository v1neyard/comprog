#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main() {
    int a;
    string b,c;
    cin >> a >> b >> c;
    string d = b+c;
    int de = stoi(d) - stoi(b);
    int f = pow(10,d.size()) - pow(10,b.size());
    int g = gcd(de,f);
    cout << (de + a*f)/g << " / " << f/g;
    return 0;
}