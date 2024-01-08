#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, string> m;
    m["2"] = "abc";
    m["3"] = "def";
    m["4"] = "ghi";
    m["5"] = "jkl";
    m["6"] = "mno";
    m["7"] = "pqrs";
    m["8"] = "tuv";
    m["9"] = "wxyz";
    m["0"] = " ";
    string s;
    while (cin >> s){
        if (s=="T2K"){
            cin.ignore();
            getline(cin, s);
            s += " ";
            bool b = 0;
            cout << ">>";
            for (int i=0; i<s.size(); i++)
                if (s[i]!=' ')
                    for (int j=i+1; j<s.size(); j++)
                        if (s[j]==' '){
                            string a = s.substr(i, j-i);
                            if (b) cout << " 0";
                            b = 1;
                            for(int k=0; k<a.size(); k++){
                                if (a[k]>='A' && a[k]<='Z') a[k] += 32;
                                for (auto itr=m.begin(); itr!=m.end(); itr++){
                                    int temp = (*itr).second.find(a[k]);
                                    if (temp!=-1){
                                        cout << " ";
                                        for (int l=0; l<temp+1; l++)
                                            cout << (*itr).first;
                                    }
                                }
                            }
                            i = j;
                            break;
                        }
            cout << endl;
        }
        else if (s=="K2T"){
            cin.ignore();
            getline(cin, s);
            s += " ";
            cout << ">> ";
            for (int i=0; i<s.size(); i++)
                if (s[i]!=' ')
                    for (int j=i+1; j<s.size(); j++)
                        if (s[j]==' '){
                            string a = s.substr(i, j-i);
                            string temp = a.substr(0, 1);
                            cout << m[temp][a.size()-1];
                            i = j;
                            break;
                        }
            cout << endl;
        }
    }
    return 0;
}