#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,A,sum=0;
  cin >> N;
  
  for(int i=0;i<N;i++){
    cin >> A;
    
    if(A>10)
      sum+=(A-10);

  }
  
  cout << sum <<endl;
  return 0;
  
}