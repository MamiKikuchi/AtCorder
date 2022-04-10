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
    int n, count_s=0, count_t =0;
    cin >> n;
    vector<string> s(n), t(n);
    REP(i, n) cin >> s[i] >> t[i];

    REP(i, n){
        count_s = 0;
        count_t = 0;
        REP(j, i){
            if(s[i]==s[j] || s[i]==t[j]) count_s++;
            if(t[i]==t[j] || t[i]==s[j]) count_t++;
        }
        REP2(j, i+1, n){
            if(s[i]==s[j] || s[i]==t[j]) count_s++;
            if(t[i]==t[j] || t[i]==s[j]) count_t++;
        }
        if(count_s > 0 && count_t > 0){
            PRINT("No")
            return 0;
        }
    
    }
    PRINT("Yes")
    return 0;
}