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
    int n, k, max_size =0;
    cin >> n >> k;
    vs S(n);
    map<char, int> count_font{};

    REP(i, n){
        cin >> S[i];
        REP(j, int(S[i].size())){
                count_font[S[i].at(j)]++;
        }
        if(max_size < int(S[i].size())) max_size = int(S[i].size());
    }
    int num = 0;
    if(k > 1){
        for (const auto &item : count_font){
            if(item.second >= k) num++;
        }
        PRINT(num)
    }else{
        PRINT(max_size)
    }
    
    return 0;
}