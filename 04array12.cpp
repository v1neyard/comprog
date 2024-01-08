#include <bits/stdc++.h>
using namespace std;
int main(){
    string a[] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string b[] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
    int n;
    cin >> n;
    while (n--){
        bool found = 0;
        string s;
        cin >> s;
        for (int i=0; i<10; i++){
            if (a[i]==s){
                cout << b[i] << "\n";
                found = 1;
                break;
            }
            if (b[i]==s){
                cout << a[i] << "\n";
                found = 1;
                break;
            }
        }
        if (!found) cout << "Not found\n";
    }
    return 0;
}