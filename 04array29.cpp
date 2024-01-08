#include <bits/stdc++.h>
using namespace std;
int A(int a, int b, int c, int d, int e, int f, int g, int h){
    int x2 = min(c,g), x1 = max(a,e), y2 = min(d,h), y1 = max(b,f);
    if (x2-x1<0 || y2-y1<0) return 0;
    return (x2-x1)*(y2-y1);
}
int main(){
    int n;
    cin >> n;
    int arr[n][4], m = 0;
    for (int i=0; i<n; i++)
        for (int j=0; j<4; j++)
            cin >> arr[i][j];
    int a[n*(n-1)/2][3], k = 0;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++){
            a[k][0] =  i;
            a[k][1] = j;
            a[k][2] = A(arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[j][0], arr[j][1], arr[j][2], arr[j][3]);
            m = max(m, a[k][2]);
            k++;
        }
    if (!m) cout << "No overlaps";
    else {
        cout << "Max overlapping area = " << m << "\n";
        for (int i=0; i<k; i++){
            if (m==a[i][2])
                cout << "rectangles " << a[i][0] << " and " << a[i][1] << "\n";
        }
    }
    return 0;
}