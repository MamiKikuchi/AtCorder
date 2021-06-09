#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M,A[2000],B[2000],pair=0;
  cin >> N >> M;


  for(int i=0;i<M;i++) cin >> A[i] >> B[i];
  
  for(int i=0;i<M;i++){
      for(int j=0;j<M;j++){
          if(B[i]==A[j] && A[i]!=B[j]) pair+=abs(A[i]-B[j]);
          //cout << rout <<endl;
      }
  }
  
pair+=N+M;
 
  cout << pair << endl;
  
  return 0;
}