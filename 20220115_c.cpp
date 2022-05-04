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
    int n, q;
    cin >> n >> q;
    vll a(n);
    vector<pair<ll, int>> x_k(q);
    REP(i, n) cin >> a[i];
    REP(i, q) cin >> x_k[i].first >> x_k[i].second;

    map<ll, vi> count{};

    REP(i,n) count[a[i]].push_back(i+1); 
    REP(i, q){
        if(count.count(x_k[i].first)!=0 && int(count[x_k[i].first].size()) >= x_k[i].second) PRINT(count[x_k[i].first][x_k[i].second-1])
        else PRINT(-1)
    }
    return 0;
}