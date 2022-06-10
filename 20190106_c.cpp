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
    vi a(n), b(n), c(n);
    REP(i, n) cin >> a[i] >> b[i] >> c[i];
    // dp配列の定義
    int dp[n+1][3];
    // dp配列の初期化
    REP(i, n+1) REP(j, 3) dp[i][j] = 0;
    REP2(i, 1, n+1){
        REP(j, 3){
            if(j == 0){
                dp[i][j] = max(dp[i][j], dp[i-1][1]+b[i-1]);
                dp[i][j] = max(dp[i][j], dp[i-1][2]+c[i-1]);
            }else if(j == 1){
                dp[i][j] = max(dp[i][j], dp[i-1][0]+a[i-1]);
                dp[i][j] = max(dp[i][j], dp[i-1][2]+c[i-1]);
            }else{
                dp[i][j] = max(dp[i][j], dp[i-1][0]+a[i-1]);
                dp[i][j] = max(dp[i][j], dp[i-1][1]+b[i-1]);
            }
        }
    }
    int ans = max(dp[n][0], dp[n][1]);
    ans = max(ans, dp[n][2]);
    PRINT(ans)
    return 0;
}