#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string w;
    vector<string> W;

    bool check = true;

    for(int i=0;i<n;i++){
        cin >> w;
        W.push_back(w);
        for(int j=0;j<i;j++) if(W[j] == W[i]) check = false;
        if(i>0) if(W[i-1].at(int(W[i-1].size())-1) != W[i].at(0)) check = false;
        //cout << W[i-1].size()<< endl;
    }

    if(check == true) cout << "Yes" << endl;
    else cout << "No" << endl;

}