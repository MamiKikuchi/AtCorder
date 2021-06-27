#include<bits/stdc++.h>
using namespace std;


int main(){
  int N,t;
  cin >> N;
  vector<double> l(N),r(N);

  for(int i=0;i<N;i++) {
    cin >> t >> l[i] >> r[i];
    if(t==2) r[i] -= 0.5;
    else if(t==3) l[i] += 0.5;
    else if(t==4){
      l[i] += 0.5;
      r[i] -= 0.5;
    }
  }
  
  int count = 0;

  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      if(max(l[i],l[j])<=min(r[i],r[j])) count++;
    }
  }

  cout << count << endl;
}