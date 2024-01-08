#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector< pair<double,double> > p(n);
    vector<double> d(n), temp(n);
    for (int i=0; i<n; i++){
        cin >> p[i].first >> p[i].second;
        d[i] = sqrt(pow(p[i].first, 2) + pow(p[i].second, 2));
        temp[i] = d[i];
    }
    sort(temp.begin(), temp.begin()+n);
    for (int i=0; i<n; i++)
        if (d[i]==temp[2]){
            cout << "#" << i+1 << ": (" << p[i].first << ", " << p[i].second << ")";
            break;
        }
    return 0;
}