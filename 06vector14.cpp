#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    set<int> set;
    int x;
    while (cin >> x){
        if (!set.count(x)){
            set.insert(x);
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for (int i=0; i<v.size(); i++){
        if (i==10) break;
        cout << v[i] << " ";
    }
    return 0;
}