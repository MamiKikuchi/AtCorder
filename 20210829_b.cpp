#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;

    vector<pair<string,string>> v;
    v.resize(n);


    for(int i=0;i<n;i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(),v.end());
    
    string ans = "No";

    //for(int i=0;i<n;i++) cout << v[i].first << v[i].second << endl;
    for(int i=0;i<n-1;i++){
        if(v[i].first == v[i+1].first && v[i].second == v[i+1].second) ans = "Yes";

    }

    cout << ans << endl;
}