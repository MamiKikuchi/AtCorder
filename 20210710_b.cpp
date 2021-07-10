#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> A;
    A.resize(n);

    int ans =0;

    for(int i=0;i<n;i++){
        cin >> A[i];
        if((i+1)%2==0) ans += A[i]-1;
        else ans += A[i];
    }

    if(ans <= x) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}