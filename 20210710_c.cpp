#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long MOD = 1000000007;

    vector<long long> C;
    C.resize(n);

    for(int i=0;i<n;i++) cin >> C[i];

    long long ans =1;

    sort(C.begin(),C.end());

    for(int i=0;i<n;i++){
        long long tmp =C[i];
        if(i>0){
            tmp = C[i]-i;
            
            if(tmp<=0) tmp = 0;
        }
        ans = (ans%MOD)*(tmp%MOD);
    }

    cout << ans%MOD << endl;
}