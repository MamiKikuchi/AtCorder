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
    int n, sec,tmp;
    string val;
    cin>> n;
    vs S(n);
    REP(i, n) cin >> S[i];
    vi max_val(n, 0);
    //n個目のリールを最初に動かす
    REP(i, n){
        //文字列の最初の値にそろえる
        val = S[i].at(0);
        //それ以外のリールにおける値の場所
        REP(j, n){
            if(j!=i){
                sec = S[j].find(val);
                if(tmp != sec){
                    if(sec == 0) tmp = sec + 10;
                    max_val[i] = max(max_val[i], sec);
                    if(max_val[i] == 10) 
                }else{
                    sec = tmp + 10;
                    max_val[i] = 
                }
            }
        }
    } 
    sort(ALL(max_val));
    PRINT(max_val[0])
    return 0;
}