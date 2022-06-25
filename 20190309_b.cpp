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
    int n, m,c ;
    cin >> n >> m >> c;
    vi B(m);
    vector<vi> A(n, vi(m));
    REP(i, m) cin >> B[i];
    REP(i, n) REP(j, m) cin >> A[i][j];

    int count = 0, sum = 0;
    REP(i, n){
        REP(j, m){
            sum += A[i][j]*B[j];
        }
        if(sum + c > 0) count++; 
        sum = 0;
    }
    PRINT(count)
    return 0;
}