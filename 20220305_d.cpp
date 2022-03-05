#include<bits/stdc++.h>
using namespace std;

string S;
int Q;
vector<long long> t, k;
int mod = 1000007;

int main(){
    cin >> S >> Q;
    t.resize(Q);
    k.resize(Q);

    for(int i=0; i<Q; ++i) cin >> t[i] >> k[i];
    
    vector<string> S_v;
    S_v.push_back(S);

    for(int i=1; i<=Q; ++i){
        
        string tmp = "";
        for(int j=0; j<(int)S_v[i-1].size(); ++j){
            
            if(S_v[i-1].at(j) == 'A') tmp += "BC";
            else if(S_v[i-1].at(j) == 'B') tmp += "CA";
            else if(S_v[i-1].at(j) == 'C') tmp += "AB";
        }
        S_v.push_back(tmp);

    }

    for(int i=0; i<Q; ++i){
        char ans = S_v[t[i]].at(k[i]-1);
        cout << ans << endl;
    }
    

}