#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ,k;
    cin >> n >> k;

    vector<long long> C;
    C.resize(n);
    for(int i=0;i<n;i++) cin >> C[i];

    map<long long, long long> mp;

    //最初の区間の種類数
    for(int i=0;i<k;i++) mp[C[i]]++;
    int ans = mp.size();

    for(int i=k;i<n;i++){
        mp[C[i]]++;
        mp[C[i-k]]--;
        if(mp[C[i-k]] == 0) mp.erase(C[i-k]);
        ans = max(ans,(int)mp.size());
    }

    cout << ans << endl;
    

}