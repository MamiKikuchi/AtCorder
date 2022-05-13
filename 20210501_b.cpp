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

int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}
int lcm(int a, int b){
    return a*b / gcd(a, b);
}

double ray_function(double x1, double y1,double x2, double y2)
{
    //y=ax+bのbを求める関数
    double lcm_x = lcm(int(x1), int(x2));
    double dot1 = lcm_x/x1;
    double dot2 = lcm_x/x2;
    double y1_2 = dot1 * y1;
    double y2_2 = dot2 * y2;

    double b = (y1_2-y2_2) / (dot1-dot2);
    return b;
}

int main()
{
    int N;
    double D, H;
    cin >> N >> D >> H;
    vector<double> d(N), h(N);
    REP(i, N) cin >> d[i] >> h[i];
    double max_h = 0.0;
    REP(i, N){
        double b = ray_function(D, H, d[i], h[i]);
        max_h = max(max_h, b);
    }
    PRINT(max_h)
    return 0;
}