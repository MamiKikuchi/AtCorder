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
    int h, w, r, c;
    cin >> h >> w >> r >> c;

    int ans = 0;
    REP2(i, -1, 2){
        REP2(j, -1, 2){
            if(c+i>0 && r+j>0 && c+i<=w && r+j<=h){
                if(abs(i)+abs(j)==1) ans++;
            }
        }
    }

    PRINT(ans)
    return 0;
}