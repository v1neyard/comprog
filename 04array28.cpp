#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int arr[26];
    for (int i=0; i<26; i++)
        arr[i] = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i]>='a' && s[i]<='z')
            arr[s[i]-'a']++;
        else if (s[i]>='A' && s[i]<='Z')
            arr[s[i]-'A']++;
    }
    for (int i=0; i<26; i++){
        if (arr[i])
            cout << (char)(i + 'a') << " -> " << arr[i] << "\n";
    }
    return 0;
}