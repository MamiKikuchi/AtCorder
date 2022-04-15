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
    int n, x;
    cin >> n >> x;
    vi A(n);
    REP(i, n) cin >> A[i];

    vector<bool> knowinfo(n, false);
    int send = x;
    int receive = A[x-1];
    int count = 1;
    knowinfo[send-1] = true;
    REP(i, n){

        if(knowinfo[receive- 1] == false){
            count++;
            knowinfo[receive - 1] = true;
            send = receive;
            receive = A[send - 1];
        }else{
            PRINT(count)
            return 0;
        }
        
    }
    PRINT(count)
    return 0;
}