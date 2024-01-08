#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    double arr[m][n];
    double ans[m-2][n-2];
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            cin >> arr[i][j];
    for (int i=1; i<m-1; i++){
        for (int j=1; j<n-1; j++){
            ans[i-1][j-1] = 0;
            for (int k=i-1; k<=i+1; k++)
                for (int l=j-1; l<=j+1; l++)
                    ans[i-1][j-1] += arr[k][l];
            cout << round((ans[i-1][j-1]/9)*100)/100.0 << " ";
        }
        cout << "\n";
    }
    return 0;
}