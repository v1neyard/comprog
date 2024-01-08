#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double> v(6);
    for (auto &e : v)
        cin >> e;
    v.push_back(sqrt(pow(v[0]-v[4],2) + pow(v[1]-v[5],2)));
    cout << round((v[0]*(v[6]-v[2]+v[3]) + v[4]*(v[2]-v[3]))/v[6]) << " ";
    cout << round((v[1]*(v[6]-v[2]+v[3]) + v[5]*(v[2]-v[3]))/v[6]);
    return 0;
}