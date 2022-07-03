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
    vi v(n);
    REP(i, n) cin >> v[i];
    sort(ALL(v));
    double max_v = 0.0;
    max_v =(double)v[0];
    REP(i,  n-1){
        max_v = (max_v + (double)v[i+1])/ 2.0;
    }
    PRINT(max_v)
    return 0;
}