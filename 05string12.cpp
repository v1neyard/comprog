#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i=0; i<s.size()/2; i++)
        swap(s[i], s[s.size()-i-1]);
    while(1){
        string temp;
        cin >> temp;
        if (temp=="END") break;
        for (int i=0; i<temp.size()/2; i++)
            swap(temp[i], temp[temp.size()-i-1]);
        if (s.size()<temp.size()) swap(s, temp);
        for (int i=0; i<temp.size(); i++){
            s[i] += temp[i] - 48;   
            for (int j=i; j<s.size(); j++){
                if (s[j]>'9'){
                    s[j] -= 10;
                    if (j+1==s.size()){
                        s.push_back('1');
                        break;
                    }
                    else s[j+1]++;
                }
                else break;
            }
        }
    }
    for (int i=0; i<s.size()/2; i++)
        swap(s[i], s[s.size()-i-1]);
    cout << s;
    return 0;
}