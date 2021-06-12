#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n);
    long long sum = 0;
    int mod = 1000000007;

    for(int i=0;i<n;i++){
        cin >> A[i];
        sum += A[i];
        sum %= mod;
    }

    long long ans = A[0] * n;

    for(int i =0;i<n;i++){

        sum -= A[i];
        if(sum < 0) sum+=mod;

        int n2 = n-2*(i+1);

        if(n2 > 0) ans += sum * n2;
       
        ans %= mod;
        //cout << ans << endl;

    }
    
    

    cout << ans << endl;

    return 0;
}