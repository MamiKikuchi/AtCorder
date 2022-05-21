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
    int n, k, a, max_val=0;
    cin >> n >> k;
    map<int, vi> A{};
    vi B(n);
    
    REP(i, n){
        cin >> a;
        A[a].push_back(i+1);
        max_val = max(max_val, a);
    }
    REP(i, k) cin >> B[i];
    vi max_id = A[max_val];
    
    REP(i, k){
        REP(j, int(max_id.size())){
            if(B[i] == max_id[j]){
                PRINT("Yes")
                return 0;
            }
        }
    }
    PRINT("No")
    return 0;
}