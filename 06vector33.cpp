#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> p;
    vector<int> s, n;
    vector<double> d;
    string a;
    int b, sum = 0, r = 100;
    while (cin >> a){
        if (a=="END") break;
        cin >> b;
        p.push_back(a);
        s.push_back(b);
        sum += b;
    }
    double ave = sum/100;
    for (int i=0; i<p.size(); i++){
        n.push_back((int)(s[i]*100/sum));
        d.push_back((double)s[i]*100/sum - n[i]);
        r -= n[i];
    }
    if (r)
        for (int i=1; i<d.size(); i++)
            for (int j=0; j<i; j++)
                if (d[i]<d[j]){
                    swap(d[i], d[j]);
                    swap(p[i], p[j]);
                    swap(s[i], s[j]);
                    swap(n[i], n[j]);
                }
    while (r){
        n[d.size()-1]++;
        d.pop_back();
        r--;
    }
    for (int i=1; i<s.size(); i++)
        for (int j=0; j<i; j++)
            if (s[i]<s[j]){
                swap(d[i], d[j]);
                swap(p[i], p[j]);
                swap(s[i], s[j]);
                swap(n[i], n[j]);
            }
    for (int i=p.size()-1; i>=0; i--){
        if (n[i])
            cout << p[i] << " " << n[i] << " " << s[i] << "\n";
        else break;
    }
    return 0;
}