#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    b += " ";
    vector<int> x, sum, sorted;
    vector< vector<int> > y(1);
    for (int i=0; i<b.size(); i++)
        if (b[i]!=' ')
            for (int j=i+1; j<b.size(); j++)
                if (b[j]==' '){
                    x.push_back(stoi(b.substr(i, j-i)));
                    i = j;
                    break;
                }
    if (a=="first"){
        y[0].push_back(x[0]);
        sum.push_back(x[0]);
        for (int i=1; i<x.size(); i++){
            bool found = 1;
            for (int j=0; j<sum.size(); j++)
                if (sum[j]+x[i]<=100){
                    sum[j] += x[i];
                    y[j].push_back(x[i]);
                    found = 0;
                    break;
                }
            if (found){
                vector<int> temp;
                temp.push_back(x[i]);
                y.push_back(temp);
                sum.push_back(x[i]);
            }
        }
    }
    else if (a=="best"){
        y[0].push_back(x[0]);
        sum.push_back(x[0]);
        sorted.push_back(x[0]);
        for (int i=1; i<x.size(); i++){
            bool found = 1;
            sort(sorted.begin(), sorted.begin()+sorted.size());
            for (int j=sorted.size()-1; j>=0; j--){
                if (sorted[j]+x[i]<=100)
                    for (int k=0; k<sum.size(); k++)
                        if (sorted[j]==sum[k]){
                            sum[k] += x[i];
                            sorted[j] += x[i];
                            y[k].push_back(x[i]);
                            found = 0;
                            break;
                        }
                if (!found) break;
            }
            if (found){
                vector<int> temp;
                temp.push_back(x[i]);
                y.push_back(temp);
                sum.push_back(x[i]);
                sorted.push_back(x[i]);
            }
        }
    }
    for (int i=0; i<y.size(); i++)
        sort(y[i].begin(), y[i].begin()+y[i].size());
    for (int i=1; i<y.size(); i++)
        for (int j=0; j<i; j++){
            if (sum[i]<sum[j]){
                swap(sum[i], sum[j]);
                swap(y[i], y[j]);
            }
            else if (sum[i]==sum[j]){
                if (y[i].size()>y[j].size()){
                    swap(sum[i], sum[j]);
                    swap(y[i], y[j]);
                }
                else if (y[i].size()==y[j].size())
                    for (int k=0; k<y[i].size(); k++)
                        if (y[i]>y[j]){
                            swap(sum[i], sum[j]);
                            swap(y[i], y[j]);
                            break;
                        }
            }
        }
    for (int i=y.size()-1; i>=0; i--){
        for (int j=0; j<y[i].size(); j++)
            cout << y[i][j] << " ";
        cout << "\n";
    }
    return 0;
}