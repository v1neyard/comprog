#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, w = 0;
    cin >> n;
    int r[n];
    for (int i=0; i<n; i++)
        cin >> r[i];
    for (int i=0; i<n-1; i++){
        if (r[i]>r[i+1]){
            int pos = i+1;
            for (int j=i+1; j<n; j++){
                if (r[i]>r[j]){
                    if (r[j] > r[pos]) pos = j;
                    w += r[i] - r[j];
                }
                else {
                    i = j-1;
                    pos = 0;
                    break;
                }
            }
            if (pos){
                w -= (pos-i)*(r[i]-r[pos]);
                for (int j=pos+1; j<n; j++)
                    w -= r[i] - r[j];
                i = pos-1;
            }
        }
    }
    cout << w;
    return 0;
}