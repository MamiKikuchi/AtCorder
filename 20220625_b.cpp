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
    int n, k, q;
    cin >> n >> k >> q;
    vi A(k), L(q);
    REP(i, k) cin >> A[i];
    REP(i, q) cin >> L[i];
    //マスのベクトル: 0の時マスにはコマが置いていない
    vi N(n, 0);
    REP(j, q){
        N[A[L[j]-1]-1] = L[j];
    }
    REP(i, q){
        if(A[L[i]-1] != n){
            if(N[A[L[i]-1]] == 0){
                N[A[L[i]-1]] = L[i];
                N[A[L[i]-1]-1] = 0;
                A[L[i]-1]++;
            }
        }
    }
    REP(i, k) cout << A[i] << " ";
    cout << endl;
    return 0;
}