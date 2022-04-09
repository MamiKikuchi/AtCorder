#include<bits/stdc++.h>
using namespace std;
/*
int n;
int  A[10000010];
int  ans[10000010];
int max_a[10000010];
int sum[10000010];

int main(){
    cin >> n;
    sum[0] = 0; 
    for(int i=0; i<n; i++){
        cin >> A[i];
        //累積和
        sum[i+1] = sum[i] + A[i];
        max_a[i] = A[i];
    }
    //累積和の累積和
    for(int i=0; i<n; i++) sum[i+1] += sum[i];
    //最大値の計算（配列に保存)
    for(int i=1; i<n; i++){
        max_a[i] = max(max_a[i-1], max_a[i]);
    }
    for(int i=0; i<n; i++){
        ans[i] = (i+1) * max_a[i]  + sum[i+1]; 
        cout << ans[i] << endl;
    }

}
*/


#define REP(i,m,n) for(int i=int(m);i<int(n);i++)
#define RREP(i,m,n) for(int i=int(n)-1;i>=int(m);--i)
#define EACH(i,c) for (auto &(i): c)
#define all(c) begin(c),end(c)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(begin(c),end(c))
#define pb emplace_back
#define MP make_pair
#define SZ(a) int((a).size())
//#define int long long

#ifdef LOCAL
#define DEBUG(s) cout << (s) << endl
#define dump(x)  cerr << #x << " = " << (x) << endl
#define BR cout << endl;
#else
#define DEBUG(s) do{}while(0)
#define dump(x) do{}while(0)
#define BR 
#endif
using namespace std;



using UI = unsigned int;
using UL = unsigned long;
using LL = long long;
using ULL = unsigned long long;
using VI = vector<int>;
using VVI = vector<VI>;
using VLL = vector<LL>;
using VVLL = vector<VLL>;
using VS = vector<string>;
using PII = pair<int,int>;
using VP = vector<PII>;
template<class T> using V = vector<T>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

//constexpr double EPS = 1e-10;
//constexpr double PI  = acos(-1.0);
//constexpr int INF = INT_MAX;
//constexpr int MOD = 1'000'000'007;
//inline void modAdd(LL &l, LL &r) {l = (l + r) % MOD;}

template<class T> inline T sqr(T x) {return x*x;}
long double sqrt(int v) {return sqrt((long double)v);}
long double sqrt(long long v) {return sqrt((long double)v);}

void solve() {
    LL n;
    cin >> n;
    VLL a(n);
    REP(i,0,n) {
        cin >> a[i];
    }

    VLL ru(n);
    ru[0] = a[0];
    REP(i,1,n) ru[i] = ru[i-1] + a[i];

    LL maxv = a[0],idx = 0;
    LL sum = 0;
    REP(i,0,n) {
        if (maxv < a[i]) {
            maxv = a[i];
            idx = i;
        }
        sum += ru[i];
        dump(sum);
        cout << sum + maxv * (i+1) << endl;
    }
}

signed main() {
    solve();
    
    return 0;
}
/*
メモ：
最大値を項に足すので、足された項は必ず最大値になる！！
fk(a)-fk-1(a)はkmk-(k-1)mk-1+Σai
*/