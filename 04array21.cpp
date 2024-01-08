#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
        int u = 1, l = arr[i];
        if (!i){
            cout << l << "\n";
            continue;
        }
        for (int j=i-1; j>=0; j--){
            u += l*arr[j];
            if (j!=0)
                swap(u, l);
        }
        cout << setprecision(10) << (double)u/l << "\n";
    }
    return 0;
}