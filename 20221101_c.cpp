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
    int N;
    cin >> N;
    vector<pii> xy(N);
    REP(i, N) cin >> xy[i].first >> xy[i].second;
    sort(ALL(xy));
    int  x1, x2, y1, y2;
    REP(i, N-2){
        REP2(j, i+1, N-1){
            REP2(k, j+1, N){
                x1 = xy[j].first - xy[i].first;
                x2 = xy[k].first - xy[i].first;
                y1 = xy[j].second - xy[i].second;
                y2 = xy[k].second - xy[i].second;
                if(x2 * y1 == x1  * y2){
                    PRINT("Yes")
                    return 0;
                }
            }
        }
    }
    PRINT("No")
    return 0;
}