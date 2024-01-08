#include <bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    int n = s*s;
    int arr[n], pos, cnt = 0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (!arr[i]) pos = i+1;
    }
    int f = pos/s - 1;
    if (pos%s) f++;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (arr[i]>arr[j] && arr[i]!=0 && arr[j]!=0)
                cnt++;
    if (s%2){
        if (cnt%2) cout << "NO";
        else cout << "YES";
    }
    else {
        if (cnt%2==0 && f%2==1 || cnt%2==1 && f%2==0)
            cout << "YES";
        else cout << "NO";
    }
    return 0;
}