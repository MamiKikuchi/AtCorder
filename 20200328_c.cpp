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
    ll k, n;
    cin >> k >> n;
    vll A(n);
    REP(i, n) cin >> A[i];
    vll diffdistance(n);
    ll max_diff = 0;
    REP(i, n){
        //n-1番目の要素は0番目の要素との距離差を求める
        if(i == n-1){
            diffdistance[i] = k - A[i] + A[0];
        }else{
            diffdistance[i] = A[i+1] - A[i];
        }
        max_diff = max(max_diff, diffdistance[i]);
    }
    int ans = 0, count = 0;
    REP(i, n) if(diffdistance[i] != max_diff || count > 0) ans += diffdistance[i]; else count++;
    PRINT(ans)
    return 0;
}