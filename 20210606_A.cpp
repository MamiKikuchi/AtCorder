#include<bits/stdc++.h>
using namespace std;

int main(){
  int x,y,z;
  cin>> x >> y;
  
  if(x==y){
      z=x;
  }else{
      if(x==0)
        if(y==1) z=2;
      	else z=1;
      else if(x==1)
        if(y==0) z=2;
      	else z=0;
      else
        if(y==0) z=1;
      	else z=0;
  }
  
  cout << z <<endl;
  return 0;
  
}