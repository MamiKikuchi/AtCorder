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
    string N;
    cin >> N;
    ll N_num = stoll(N);
    ll conma1 = 999999 - 1000 + 1;
    ll conma2 = (999999999 - 1000000 + 1) * 2;
    ll conma3 = (999999999999 - 1000000000 + 1) * 3;
    ll conma4 = (999999999999999 - 1000000000000 + 1) * 4;
    int N_size = (int)N.size();
    int conma_num = N_size / 3;
    int conma_num2 = N_size % 3;
    if(conma_num2 == 0) conma_num -= 1;
    ll diff = 0;
    if(conma_num == 0){
        PRINT(0)
    }else if(conma_num == 1){
        diff = N_num - 1000 + 1;
        PRINT(diff)
    }else if(conma_num == 2){
        diff = (N_num - 1000000 + 1) * 2;
        PRINT(diff+conma1)
    }else if(conma_num == 3){
        diff = (N_num - 1000000000 + 1) * 3;
        PRINT(diff+conma1+conma2)
    }else if(conma_num == 4){
        diff = (N_num - 1000000000000 + 1) * 4;
        PRINT(diff+conma1+conma2+conma3)
    }else if(conma_num == 5){
        diff = 5;
        PRINT(diff+conma1+conma2+conma3+conma4)
    }
    return 0;
}