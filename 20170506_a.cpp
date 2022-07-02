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
    ll a, b, c;
    cin >> a >> b >> c;
    ll a_half =0, b_half = 0, c_half = 0, count = 0;
    if(a == 1 || b == 1 || c == 1){
        PRINT(0)
        return 0;        
    }else if(a == b && b == c){
        PRINT(-1)
        return 0;
    }
    while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
        //手持ちの半分の値をそれぞれ保存
        a_half = a / 2;
        b_half = b / 2;
        c_half = c / 2;
        //a, b, cを0に初期化
        a = 0; b = 0; c = 0;
        //手持ちの半分の値をそれぞれに追加
        a = b_half + c_half;
        b = a_half + c_half;
        c = a_half + b_half;
        count++;
    }
    PRINT(count)
    return 0;
}