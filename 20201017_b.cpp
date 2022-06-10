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
    int n, x;
    cin >> n;
    vll abs_x(n);
    REP(i, n){
        cin >> x;
        abs_x[i] = abs(x);
    }
    //L1
    ll L1=0, L_inf=abs_x[0];
    double L2=0.0;
    REP(i, n){
        L1 += abs_x[i];
        L2 += pow((double)abs_x[i], 2.0);
        L_inf = max(L_inf, abs_x[i]);
    }
    L2 = sqrt(L2);
    PRINT(L1)
    cout << fixed << setprecision(15) << L2 << endl;
    PRINT(L_inf)
    return 0;
}