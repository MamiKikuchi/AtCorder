#include<bits/stdc++.h>
using namespace std;


int main(){
  int N,a;
  vector<int> A;
  cin >> N;

  A.resize(N);

  for(int i=0; i<N; i++) cin >> A[i];

  map<int,int> cnt;
  long long ans = 0;

  for(int j=0;j<N;j++){
    ans+=j-cnt[A[j]];
   //cout << cnt[A[j]] << ans << endl;
    //A[i]の値を1ずつ
    cnt[A[j]]++;
 
  }

  cout << ans << endl;

}