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

//答え
bool ok =false;
//町と道の接続関係
map<int, vi> connect{};
vll H;

int main()
{
    int n, m, A, B;
    cin >> n >> m;
    H.resize(n);
    REP(i, n) cin >> H[i];
    REP(i, m)
    {
        cin >> A >> B;
        //ノードAとノードBの情報を保存
        connect[A].push_back(B);
        connect[B].push_back(A);
    }
    int count = 0;
    REP(i, n){
        ok = false;
        for(const auto &to : connect[i])
        {  
            //今のノード<=次のノードの時処理停止
            if(H[i] <= H[to]) continue;
            else{
                ok = true;
             }
        }
        if(ok) count++;
    }
    PRINT(count)
    return 0;
}