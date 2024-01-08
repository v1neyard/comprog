#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double> v(4);
    for (auto &e : v)
        cin >> e;
    sort(v.begin(), v.begin() + 4);
    cout << round((v[1]/2+v[2]/2)*100.0)/100.0;
    return 0;
}