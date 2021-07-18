#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   string s;

   cin >> n >> s; 

   string ans;

   for(int i=0;i<n;i++){
       if(s.at(i)=='1'){
           if((i+1)%2==0) ans = "Aoki";
           else ans ="Takahashi";
           break;
       }
   }

   cout << ans << endl;
}