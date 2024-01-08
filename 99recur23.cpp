#include <bits/stdc++.h>
using namespace std;
int F(int n){
    if (n<2) return n;
    else if (n%2)
        return (int)pow(F(n/2+1), 2) + (int)pow(F(n/2), 2);
    else return (2*F(n/2-1) + F(n/2))*F(n/2);
}
int M(int n){
    if (n<2) return 1;
    int sum = 0;
    for (int k=0; k<n-1; k++)
        sum += M(k)*M(n-k-2);
    return M(n-1) + sum;
}
int S(int n){
    if (n<3) return 1;
    return (int)(((double)1/n)*((6*n-9)*S(n-1) - (n-3)*S(n-2)));
}
int D(int n){
    if (!n) return 1;
    return n*D(n-1) + pow(-1, n);
}
int main() {
    map<string, int(*)(int)> func;
    func["F"] = F; func["M"] = M; func["S"] = S; func["D"] = D;
    string fn;
    int p;
    while (cin >> fn >> p){
        if (func.find(fn)!=func.end())
            cout << fn << "(" << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}