#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    int a,ans[2];
    string b,c;
    cin >> a >> b >> c;
    while (!stoi(c)){
        while (!stoi(b)){
            ans[0] = a;
            ans[1] = 1;
            break;
        }
        while (stoi(b)){
            ans[0] = stoi(b);
            ans[1] = pow(10,b.size());
            break;
        }
        break;
    }
    while (stoi(c)){
        while (!stoi(b)){
            ans[0] = stoi(c);
            ans[1] = (pow(10,c.size())-1)*pow(10,b.size());
            break;
        }
        while (!(c.size()-b.size())){
            while (!(stoi(c)-stoi(b))){
                ans[0] = stoi(b);
                ans[1] = pow(10,b.size())-1;
                break;
            }
            break;
        }
        while (!(b.size() - 1)){
            while (!(int(b[0]) - '-')){
                ans[0] = stoi(c);
                ans[1] = pow(10,c.size())-1;
                break;
            }
            break;
        }
        while (stoi(b)){
            ans[0] = stoi(b)*pow(10,c.size())+stoi(c)-stoi(b);
            ans[1] = (pow(10,c.size())-1)*pow(10,b.size());
            break;
        }
        break;
    }
    int x = gcd(ans[0],ans[1]);
    ans[0] /= x;
    ans[1] /= x;
    while (ans[1]-1){
        ans[0] += a*ans[1];
        break;
    }
    cout << ans[0] << " / " << ans[1];
    return 0;
}