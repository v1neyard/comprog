#include <bits/stdc++.h>
using namespace std;
int H(int n){
    return (int)pow(2, n) - 1;
}
int C(int n){
    int sum = 0;
    if (!n) return 1;
    for (int k=0; k<n; k++)
        sum += C(k)*C(n-k-1);
    return sum;
}
int M(int n);
int F(int n){
    if (!n) return 1;
    return n - M(F(n-1));
}
int M(int n){
    if (!n) return 0;
    return n - F(M(n-1));
}
int main() {
    map<string, int(*)(int)> func;
    func["H"] = H; func["C"] = C; func["F"] = F; func["M"] = M;
    string fn;
    int p;
    while (cin >> fn >> p){
        if (func.find(fn)!=func.end())
            cout << fn << "(" << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}