#include <bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin >> a;
    double L = 0, U = 2.8;
    int arr[] = {1,10,100};
    while (1){
        double i = U/2 + L/2;
        if (abs(pow(10, i)-a)<=0.0000000001*max(a,pow(10, i))){
            cout << round(i*1e5)/1e5;
            break;
        }
        else if (pow(10,i) > a) U = i;
        else if (pow(10,i) < a) L = i;
    }
    for (int i=0; i<3; i++)
        if (a==arr[i])
            cout << ".0";
    return 0;
}