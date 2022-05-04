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
    cin >> n >> m;
    vi L(m), R(m);
    REP(i, m){
        cin >> L[i] >> R[i];
    }
    int max_L = L[0];
    int min_R = R[0];

    REP(i, m){
        max_L = max(max_L, L[i]);
        min_R = min(min_R, R[i]);
    }
    if(min_R - max_L >= 0) PRINT(min_R - max_L + 1)
    else PRINT(0)

    return 0;
}