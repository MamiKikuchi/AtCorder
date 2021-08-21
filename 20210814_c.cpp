#include<bits/stdc++.h>
using namespace std;

vector<long long> S, T;


int main(){
    long long n;
    vector<long long> ans; 

    cin >> n;
    S.resize(n);
    T.resize(n);
    ans.resize(n);

    for(int i=0;i<n;i++) cin >> S[i];
    for(int i=0;i<n;i++) cin >> T[i];


    ans[0] = T[0];

    for(int i=1;i<n;i++){
        ans[i] = ans[i-1]+S[i-1];
        if(ans[i] > T[i]) ans[i] = T[i];

        //cout << ans[i] << " " << T[i] << endl;
    }

    if(ans[0] > ans[n-1]+S[n-1]) ans[0] = ans[n-1]+S[n-1];
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1]+S[i-1];
        if(ans[i] > T[i]) ans[i] = T[i];

        //cout << ans[i] << " " << T[i] << endl;
    }

    for(int i=0;i<n;i++) cout << ans[i] << endl;


    return 0;
}