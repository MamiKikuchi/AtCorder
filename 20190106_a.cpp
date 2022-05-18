#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define PRINT(n) cout << n << endl;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n;
    cin >> n;
    vll h(n);
    REP(i, n) cin >> h[i];

    //dp配列の定義
    ll dp[n+1];
    //dp配列をINFで初期化
    REP(i, n) dp[i] = INF;
    //dp配列の初期条件
    dp[0] = 0;

    //ループで処理
    REP2(i, 1, n){
        if(i > 1){
            dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
        }else{
            dp[i] = dp[i-1]+abs(h[i]-h[i-1]);
        }
    }

    PRINT(dp[n-1])

    return 0;
}