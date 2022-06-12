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
    int n, k;
    cin >> n >> k;
    vi A(k);
    REP(i, k) cin >> A[i];
    vector<pii> XY(n);
    REP(i, n) cin >> XY[i].first >> XY[i].second;
    double R=1000000, min_tmp=0.0;
    REP(i, n){
        REP(j, k){
            if(i!=A[j]-1){
                ll diff = pow(abs(XY[i].first - XY[A[j]-1].first), 2) + pow(abs(XY[i].second - XY[A[j]-1].second), 2);
                PRINT(diff)
                min_tmp = max(min_tmp, sqrt((double)diff));
            }
        }
        R = min(R, min_tmp);
    }
    cout << fixed << setprecision(15) << R << endl;

    return 0;
}