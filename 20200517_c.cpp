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
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    double hour = 30.0 * h;
    double min = 6.0 * m;
    if(m > 0) hour += 30.0 * (double(m) / 60.0);
    double diff = abs(hour - min);

    double ans = sqrt(pow(a, 2.0) + pow(b, 2.0) - 2.0 * a * b * cos((diff / 180.0) * M_PI));
    cout << fixed << setprecision(21) << ans << endl;

    return 0;
}