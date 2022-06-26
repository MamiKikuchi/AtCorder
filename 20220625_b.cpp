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

    REP(i, q){
        if(A[L[i]-1] != n){
            if(L[i] == k) A[L[i]-1]++;
            else if(A[L[i]-1] + 1 < A[L[i]]) A[L[i]-1]++;
        }
    }
    REP(i, k) cout << A[i] << " ";
    cout << endl;
    return 0;
}