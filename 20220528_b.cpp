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
    int h, w;
    cin >> h >> w;
    vs S(h);
    vector<pii> P;
    REP(i, h){
        cin >> S[i];
        REP(j, w) if(S[i].at(j) == 'o') P.push_back({i, j});
    }
    // 行-行 + 列-列
    int diff = abs(P[0].first - P[1].first) + abs(P[0].second - P[1].second);
    PRINT(diff)

    return 0;
}