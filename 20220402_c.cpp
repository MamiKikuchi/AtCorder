#include<bits/stdc++.h>
using namespace std;

long long n, k, x;
long long  A[200010];

long long dp[100000100][1000000100];

int main(){
    cin >> n >> k >> x;

    for(int i=0; i<n; i++) cin >> A[i];
    //A0を購入する時の金額(dpの初期値)
    for(int i=0; i<n; i++){
        dp[i][0] = A[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=k; j++){
            if(j <= k) dp[i+1][j] = min(dp[i][j], dp[i][j]);
            else dp[i+1][j] = dp[i][j];
        }
    }
    cout << dp[n][k] << endl;
}