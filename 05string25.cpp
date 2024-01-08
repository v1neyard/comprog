#include <bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    while(cin >> x >> y){
        string ans[] = {"0","1","6248","1397","64","5","6","1793","6842","19"};
        char m = x[x.size()-1], n = y[y.size()-1];
        if (y=="0")
            cout << ">> 1\n";
        else if (m=='5' || m=='6' || m=='0' || m=='1')
            cout << ">> " << m-48 << "\n";
        else if (m=='4' || m=='9')
            cout << ">> " << ans[m-48][(n - 48)%2] << "\n";
        else if (m=='2' || m=='3' || m=='7' || m=='8'){
            if (y.size()<2)
                cout << ">> " << ans[m - 48][stoi(y)%4] << "\n";
            else
                cout << ">> " << ans[m-48][stoi(y.substr(y.size()-2))%4] << "\n";
        }
    }  
  return 0;
}