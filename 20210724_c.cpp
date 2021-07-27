#include<bits/stdc++.h>
using namespace std;

string s;
int term_chk = 0;
vector<int> seen;
char term[] = {'c','h','o','k','u','d','a','i'};

void df(int i){
    if(seen[i]) return;
    if(s.at(i) == term[term_chk]){
        seen[i] = true;
       // cout << i << s.at(i) << term[term_chk] << seen[i] << endl;
        term_chk++;
        
    }

     for(int j=i+1;j<int(s.size());j++){
        if(seen[j]) continue;
        df(j);
    }

}

int main(){

    cin >> s;

    long long MOD = 1000000007;

    seen.resize(int(s.size()));

    int ans =0;
    

    for(int i=0;i<int(s.size());i++){
        term_chk = 0;
        int count = 0;
        for(int j=0;j<int(s.size());j++) seen[j] = false;
        df(i);
        for(int j=0;j<int(s.size());j++) if(seen[j]) count++;
        if(count == 8) ans++;
    }

    cout << ans%MOD << endl;
}