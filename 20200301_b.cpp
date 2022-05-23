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
    int A[3][3];
    REP(i, 3) REP(j, 3) cin >> A[i][j];

    int n;
    cin >> n;
    vi b(n);
    REP(i, n) cin >> b[i];
    int ans[3][3] = {0, 0};
    REP(i, n) REP(j, 3) REP(k, 3) if(b[i]==A[j][k]) ans[j][k]=1;
    
    if(ans[0][0]==1 && ans[1][1]==1 && ans[2][2]==1){
        PRINT("Yes")
        return 0;
    }else if(ans[0][2]==1 && ans[1][1]==1 && ans[2][0]==1){
        PRINT("Yes")
        return 0;
    }else{
        REP(i, 3){
            if(ans[i][0]==1 && ans[i][1]==1 && ans[i][2]==1){
                PRINT("Yes")
                return 0;
            }else if(ans[0][i]==1 && ans[1][i]==1 && ans[2][i]==1){
                PRINT("Yes")
                return 0;
            }
        }
    }
    PRINT("No")
    return 0;
}