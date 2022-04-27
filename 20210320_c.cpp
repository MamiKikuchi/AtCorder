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

    int ans = 0;

    int N_size = int(N.size())/2;
    if(N_size == 1){
        ans = N.at(0) - '0';
    }else{
        ans = pow(10, N_size - 1) - 1;
        int ans2 = 1;
        REP(i, N_size){
            if(i==0){
                if(N.at(N_size)-'0' >= N.at(i) - '0') ans2 *= (N.at(i) - '0');
                else ans2 *= (N.at(N_size)-'0');
            }else{      
                if(N.at(N_size+i)-'0' >= N.at(i) - '0') ans2 *=  (N.at(i) - '0' + 1);
                else ans2 *=  (N.at(N_size+i) - '0' + 1);
            }

        }
        ans += ans2;
    }
    PRINT(ans)
    return 0;
}