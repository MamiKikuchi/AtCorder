#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> G;
vector<int> seen(20000,false);

void  dfs(int v){
    if(seen[v]) return;
    //seen[v]を検知済みにする
    seen[v] = true;

    for(auto next_v : G[v]){
      if(seen[next_v]) continue;//next_vの時探索済みなら飛ばす
      dfs(next_v);
    }


}

int main(){
    int n,m,a,b,c;
    cin >> n >> m;

    vector<int> C;
    C.resize(n);
    G.resize(n);

    for(int i=0;i<m;i++) {
     cin >> a >> b >> c;
        G[a-1].push_back(b-1);
        C.push_back(c);
    }

    int ans=0;

  for(int i=0; i<n; i++){
    for(int j=0;j<n;j++) seen[j]=false;
     dfs(i);
     for(int j=0; j<n; j++) if(seen[j])ans+=C[j];
  }
  
 
  cout << ans << endl;
}