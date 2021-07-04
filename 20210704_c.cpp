#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,a;
    vector<long long> A;
    cin >> n >> k;

    A.resize(n);

    map<long long,long long> cnt;

    for(int i=0;i<n;i++){
        cin >> a;
        cnt[a] = i;
    } 

    long long num = k/n;
    int i=0;
    for(auto itr=cnt.begin();itr!=cnt.end();itr++){
        if(i<k%n) A[itr->second]+=num+1;
        else A[itr->second]+=num;
         i++;
    }

    for(int i=0;i<n;i++) cout <<  A[i]  << endl;
}