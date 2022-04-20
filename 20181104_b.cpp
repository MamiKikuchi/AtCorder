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
    int n, t, a;
    pair<int, double> best_place;
    cin >> n >> t >> a;
    vi H(n);
    REP(i, n) cin >> H[i];
    double ave_temp = 0.0;

    REP(i, n){
        ave_temp = double(t) - double(H[i]) * 0.006;

        if(i==0){
            best_place.first = i + 1;
            best_place.second = abs(double(a) - ave_temp);
        }
        if(abs(double(a) - ave_temp) < best_place.second){
            best_place.first = i + 1;
            best_place.second = abs(double(a) - ave_temp);
        }
    } 
    PRINT(best_place.first)
    return 0;
}