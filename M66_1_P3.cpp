#include <bits/stdc++.h>
using namespace std;
int main(){
    string g[8] = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    double p[8] = {4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
    int n, N = 0;
    cin >> n;
    double sum = 0;
    while (n--){
        string a;
        int b;
        cin >> a >> b;
        for (int i=0; i<8; i++)
            if (a==g[i])
                sum += p[i]*b;
        N += b;
    }
    sum/=N;
    cout << round(sum*100.0)/100.0;
    return 0;
}