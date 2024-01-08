#include <bits/stdc++.h>
using namespace std;
int main(){
    string x, y;
    cin >> x >> y;
    string a[y.size()], b[x.size()];
    int cnt1[y.size()], cnt2[x.size()];
    for (int i=0; i<y.size(); i++) cnt1[i] = 0;
    for (int i=0; i<x.size(); i++) cnt2[i] = 0;
    for (int i=0; i<y.size(); i++){
        a[i] = x;
        int temp = i;
        while (temp--)
            a[i] = "-" + a[i];
        for (int j=0; j<min(a[i].size(), y.size()); j++)
            if (a[i][j]==y[j]) cnt1[i]++;
    }
    for (int i=0; i<x.size(); i++){
        b[i] = y;
        int temp = i;
        while (temp--)
            b[i] = "-" + b[i];
        for (int j=0; j<min(b[i].size(), x.size()); j++)
            if (b[i][j]==x[j]) cnt2[i]++;
    }
    int max1 = *max_element(cnt1, cnt1 + y.size());
    int max2 = *max_element(cnt2, cnt2 + x.size());
    if (max1 > max2){
        for (int i=0; i<y.size(); i++)
            if (cnt1[i]==max1){
                cout << a[i] << "\n" << y << "\n" << cnt1[i];
                break;
            }
    }
    else if (max1 < max2){
        for (int i=0; i<x.size(); i++)
            if (cnt2[i]==max2){
                cout << x << "\n" << b[i] << "\n" << cnt2[i];
                break;
            }
    }
    else {
        int pos1, pos2;
        for (int i=0; i<y.size(); i++)
            if (cnt1[i]==max1){
                pos1 = i;
                break;
            }
        for (int i=0; i<x.size(); i++)
            if (cnt2[i]==max2){
                pos2 = i;
                break;
            }
        if (pos1<=pos2)
            cout << a[pos1] << "\n" << y << "\n" << cnt1[pos1];
        else cout << x << "\n" << b[pos2] << "\n" << cnt2[pos2];
    }
    return 0;
}