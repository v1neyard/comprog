#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], b[n], pa = n-1, pb = n-1;
    for (int i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
        cout << a[i] << " ";
    }
    cout << "\n";
    sort(b, b+n);
    while (pb!=-1){
        if (a[pb]==b[pb]){
            pb--;
            pa--;
            continue;
        }
        for (int i=0; i<pa; i++)
            if (a[i]==b[pb]){
                if (!i)
                    for (int j=0; j<=pb/2; j++)
                        swap(a[j], a[pb-j]);
                else
                    for (int j=0; j<=i/2; j++)
                        swap(a[j], a[i-j]);
                for (int k=0; k<n; k++)
                    cout << a[k] << " ";
                cout << "\n";
                break;
            }
    }
    return 0;
}