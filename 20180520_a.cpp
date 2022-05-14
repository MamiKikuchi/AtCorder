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
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll sum_ab, sum_bc, sum_ac;
    REP(i, k){
        sum_ab = a + b;
        sum_bc = b + c;
        sum_ac = a + c;
        a = sum_bc;
        b = sum_ac;
        c = sum_ab;
    }
    
    ll check = llabs(a-b);
    if(to_string(check).size() > 18) PRINT("Unfair")
    else PRINT(a-b)
    return 0;
}