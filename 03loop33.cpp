#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, max1, min1, max2, min2;
    cin >> x >> y;
    int cnt = 1;
    max1 = y, min1 = x, max2 = x, min2 = y;
    while (true){
        cin >> x;
        if (x==-998 || x==-999){
            if (x==-998) cout << min1 << " " << max1;
            else cout << min2 << " " << max2;
            break;
        }
        cin >> y;
        if (cnt%2){
            max1 = max(x,max1);
            min1 = min(y,min1);
            max2 = max(y,max2);
            min2 = min(x,min2);
        }
        else {
            max1 = max(y,max1);
            min1 = min(x,min1);
            max2 = max(x,max2);
            min2 = min(y,min2);
        }
        cnt++;
    }
    return 0;
}