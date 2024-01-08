#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while (getline(cin, s)){
        string ans = "";
        char c = s[s.size()-1];
        for (int i=0; i<s.size(); i++)
            if (s[i]==c)
                for (int j=i+1; j<s.size(); j++)
                    if (s[j]==c){
                        ans += s.substr(i+1,j-i-1);
                        i = j;
                        break;
                    }
        cout << ans << "\n";
    }
    return 0;
}