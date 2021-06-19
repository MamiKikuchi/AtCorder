#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> G;
vector<int> seen(1000000000,false);

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
  int N,a;
  cin >> N;

  G.resize(N);

  for(int i=0;i<N;i++) {
    cin >> a;
    G[i].push_back(a-1);
  }
  
  int ans=0;

  for(int i=0; i<N; i++){
    for(int j=0;j<N;j++) seen[j]=false;
     dfs(i);
     for(int j=0; j<N; j++) if(seen[j])ans++;
  }
  
 
  cout << ans << endl;
  
  return 0;
}