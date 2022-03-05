#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

long long pow2(long long x, long long n){
    long long ret = 1;
    while(n > 0){
        if (n & 1) ret = ret * x % MOD;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % MOD;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}


int main(){
    int n;
    cin >> n;

    long long ans = pow2(2, n);
    long long ans2 = pow2(n, 2);
    cout << ans << " "<<ans2 << endl;
    if(ans > ans2) cout << "Yes"<< endl;
    else cout << "No"<< endl;
}