#include <bits/stdc++.h>
using namespace std;

string x[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
              "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string y[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string z[] = {"hundred", "thousand", "million", "billion", "trillion"};

string toh(string num){
    string w = "";
    int v = stoi(num);
    int n = num.size();
    if (n<3){
        if (v<20)
            w = x[v];
        else {
            if (v%10)
                w = y[num[0]-50] + " " + x[num[1]-48];
            else
                w = y[num[0]-50];
        }
    }
    else {
        if (v==0)
            return w;
        else if (v<20)
            w = x[v];
        else if (v<100){
            if (v%10)
                w = y[num[1]-50] + " " + x[num[2]-48];
            else
                w = y[num[1]-50];
        }
        else {
            string temp = num.substr(1,2);
            int V = stoi(temp);
            if (v%100==0)
                w = x[num[0]-48] + " " + z[0];
            else {
                if (V<20)
                    w = x[V];
                else if (V<100){
                    if (V%10)
                        w = y[num[1]-50] + " " + x[num[2]-48];
                    else
                        w = y[num[1]-50];
                }
                w = x[num[0]-48] + " " + z[0] + " " + w;
            }
        }
    }
    return w;
}
string tot(string num){
    string w, a, b;
    int n = num.size();
    a = num.substr(0,n-3);
    b = num.substr(n-3);
    w = toh(a) + " " + z[1] + " " + toh(b);
    if (!stoi(a)) return toh(b);
    return w;
}
string tom(string num){
    string w, a, b;
    int n = num.size();
    a = num.substr(0, n-6);
    b = num.substr(n-6);
    w = toh(a) + " " + z[2] + " " + tot(b);
    if (!stoi(a)) return tot(b);
    return w;
}
string tob(string num){
    string w, a, b;
    int n = num.size();
    a = num.substr(0, n-9);
    b = num.substr(n-9);
    w = toh(a) + " " + z[3] + " " + tom(b);
    if (!stoi(a)) return tom(b);
    return w;
}
string totr(string num){
    string w, a, b;
    int n = num.size();
    a = num.substr(0, n-12);
    b = num.substr(n-12);
    w = toh(a) + " " + z[4] + " " + tob(b);
    return w;
}
int main(){
    string num, w;
    cin >> num;
    int n = num.size();
    if (n<4)
        w = toh(num);
    else if (n<7)
        w = tot(num);
    else if (n<10)
        w = tom(num);
    else if (n<13)
        w = tob(num);
    else if (n<16)
        w = totr(num);
    cout << w;
    return 0;
}