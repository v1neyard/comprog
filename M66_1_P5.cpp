#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][2];
    vector<int> v(1440);
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++)
            cin >> arr[i][j];
        for (int k=arr[i][0]; k<arr[i][1]; k++)
            v[k]++;
    }
    cout << *max_element(v.begin(), v.end());
    return 0;
}