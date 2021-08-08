#include<bits/stdc++.h>
using namespace std;

int main(){
    long long h,w,n;
    vector<pair<long long ,long long>> AB;
    

    cin >> h >> w >> n;

    vector<vector<long long>> v(h,vector<long long>(w,0));

    AB.resize(n);


    for(int i=0;i<n;i++){
        cin >> AB[i].first >> AB[i].second;
        v[AB[i].first][AB[i].second] = i+1;
    }

    sort(AB.begin(),AB.end());

    for(int i=0;i<h;i++){
        if()
    }
}