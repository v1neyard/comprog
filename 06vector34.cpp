#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    vector< pair<string, string> > v(n);
    for (int i=0; i<n; i++){
        int pos;
        getline(cin, s);
        s += " ";
        for (int j=0; j<s.size(); j++){
            if (s[j]==' '){
                v[i].first = s.substr(0, j);
                if (j!=s.size()-1)
                    v[i].second = s.substr(j+1);
                break;
            }
        }
    }
    int queue = stoi(v[0].second),posq = 0;
    vector<int> q, dt;
    vector<string> t;
    for (int i=1; i<n; i++){
        if (v[i].first=="new"){
            cout << ">> ticket " << queue << "\n";
            q.push_back(queue);
            queue++;
            t.push_back(v[i].second);
        }
        else if (v[i].first=="next"){
            cout << ">> call " << q[posq] << "\n";
            posq++;
        }
        else if (v[i].first=="order"){
            int dmin = stoi(v[i].second) - stoi(t[posq-1]);
            cout << ">> qtime " << q[posq-1] << " " << dmin << "\n";
            dt.push_back(dmin);
            q.erase(q.begin(), q.begin()+posq);
            t.erase(t.begin(), t.begin()+posq);
            posq = 0;
        }
        else if (v[i].first=="avg_qtime"){
            int sum = 0;
            for (int i=0; i<dt.size(); i++)
                sum += dt[i];
            double avg = (double)sum/dt.size();
            cout << ">> avg_qtime " << round(avg*100.0)/100.0 << "\n";
        }
    }
    return 0;
}