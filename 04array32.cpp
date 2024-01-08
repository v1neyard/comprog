#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][3];
    for (int i=0; i<n; i++)
        for (int j=0; j<3; j++)
            cin >> a[i][j];
    for (int i=0; i<n; i++)
        for (int j=0; j<i; j++)
            if (a[j][0]>a[i][0])
                swap(a[i], a[j]);
    int t; 
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        int cost[n];
        for (int i=0; i<n; i++) cost[i] = 0;
        for (int i=0; i<n; i++){
            if (x>=a[i][1] && x<=a[i][2]){
                if (!(y>=x && y<=a[i][2]))
                    cost[i] += abs(a[i][2] - y);
            }
            else if (x<=a[i][1] && x>=a[i][2]){
                if (!(y<=x && y>=a[i][2]))
                    cost[i] += abs(a[i][2] - y);
            }
            else
                cost[i] += abs(x-a[i][2]) + abs(y-x);
        }
        for (int i=0; i<n; i++)
            if (cost[i]==*min_element(cost,cost+n)){
                cout << ">> " << a[i][0] << "\n";
                break;
            }
    }
    return 0;
}