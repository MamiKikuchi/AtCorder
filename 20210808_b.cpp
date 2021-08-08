#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n,a;
    map<long long ,long long> A;
    cin >> n;


    for(int i=0;i<n;i++){
        cin >> a;
        A[a] = i+1;
    }

    //sort(A.begin(),A.end());
    int count=0;
     for(auto i : A) {
        if(count == n-2)  cout << i.second << endl;
        count++;
        //cout << i.first << count << endl;
    }



}