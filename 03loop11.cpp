#include <bits/stdc++.h>
using namespace std;
int main(){
    double cnt=0,s=0,x;
    while (true){
        cin >> x;
        if (x==-1 && !cnt){
            cout << "No Data";
            return 0;
        }
        else if (x==-1)
            break;
        s += x;
        cnt++;
    }
    cout << round((s/cnt)*100)/100;
    return 0;
}