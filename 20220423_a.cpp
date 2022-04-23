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
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int num_t=0, num_a=0, mod_t =0, mod_a = 0;
    num_t = x / (a + c);
    mod_t = x % (a + c);
    num_a = x / (d + f);
    mod_a = x % (d + f);

    if(mod_t > a) mod_t = a;
    if(mod_a > d) mod_a = d;

    int t_meter = 0, a_meter = 0;
    t_meter = a * b * num_t + mod_t * b;
    a_meter = d * e * num_a + mod_a * e;
    if(t_meter > a_meter) PRINT("Takahashi")
    else if(t_meter < a_meter) PRINT("Aoki")
    else PRINT("Draw") 

    return 0;
}