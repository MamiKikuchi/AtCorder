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
    vi P(3);
    vector<pii> sum_P(n);
    REP(i, n) {
        REP(j, 3) cin >> P[j];
        sum_P[i].first = P[0] + P[1] + P[2];
        sum_P[i].second = i;
    }

    sort(ALL(sum_P));
    vs ans(n, "No");
    REP(i, n){
        int num =  n - i;
        if(num <= k) ans[sum_P[i].second] = "Yes";
        else if(i < n-k && sum_P[n-k].first - sum_P[i].first <= 300){
            ans[sum_P[i].second] = "Yes";
        }
    }
    REP(i, n) PRINT(ans[i])
    return 0;
}