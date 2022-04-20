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
    int n, m;
    ll T_sum = 0;
    cin >> n;
    vi T(n);
    REP(i, n){
        cin >> T[i];
        T_sum += T[i];
    } 
    cin >> m;
    vector<pii> PX(m);
    REP(i, m) cin >> PX[i].first >> PX[i].second;
    REP(i, m){
        ll ans = T_sum - T[PX[i].first-1] + PX[i].second;
        cout << ans << endl;
    }
    return 0;
}