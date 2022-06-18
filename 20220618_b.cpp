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
    vi A(n);
    REP(i, n) cin >> A[i];
    vi move(n, 0);
    int p = 0;
    REP(i, n){
        REP(j, i+1){
            if(move[j] >= 0) move[j]+=A[i];
            if(move[j] >= 4){
                p++;
                move[j] = -1;
            }
            //cout << "move"<<move[j] << endl;
        }
        //cout <<"p" << p<< endl;
    }
    PRINT(p)
    return 0;
}