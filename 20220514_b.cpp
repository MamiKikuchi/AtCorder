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
    int n, w;
    cin >> n >> w;
    vi A(n);
    REP(i, n) cin >> A[i];

    ll dp[n+10][w+10];
    //j>錘の重さのとき、dp[i+1][j-錘の重さ]+1
    REP(i, n) REP(j, w) dp[i][j] = 0;

    REP(i, n){
        REP(j, w){
            PRINT(dp[i+1][j])
            if(j > A[i]){
                if(dp[i+1][j] < 3 && i != j) dp[i+1][j] = dp[i+1][j-A[i]] + 1;
                PRINT(dp[i+1][j])
            }
        }
    }
    PRINT(dp[n-1][w-1])

    return 0;
}