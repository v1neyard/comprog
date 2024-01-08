#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    s += " ";
    int first = 1, low = 1;
    for (int i=0; i<s.size(); i++){
        if (s[i]>=48 && s[i]<=57){
            low = 1;
            for (int j=i+1; j<s.size(); j++)
                if (!(s[j]>=48 && s[j]<=57)){
                    if (first){
                        cout << s.substr(i, j-i);
                        first = 0;
                    }
                    else cout << ", " << s.substr(i, j-i);
                    i = j - 1;
                    break;
                }
        }
        else if (s[i]>='A' && s[i]<='Z' || low){
            if (low) low = 0;
            for (int j=i+1; j<s.size(); j++)
                if (!(s[j]>='a' && s[j]<='z')){
                    if (first){
                        cout << s.substr(i, j-i);
                        first = 0;
                    }
                    else cout << ", " << s.substr(i, j-i);
                    i = j - 1;
                    break;
                }
        }
    }
    return 0;
}