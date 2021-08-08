#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    vector<long long> A, B;

    cin >> n >> m;

    A.resize(n);
    B.resize(m);


    for(int i=0;i<n;i++){
        cin >> A[i];
        
    }
    for(int i=0;i<m;i++){
        cin >> B[i];
        
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

   if(n>=m) vector<vector<long long>> v(n,vector<long long>(m,0));
   else vector<vector<long long>> v(m,vector<long long>(n,0));

   


}