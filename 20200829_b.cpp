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
    string s, t;
    cin >> s >> t;
    int count = 0;
    REP(i, int(s.size())-int(t.size())+1){
        int count_tmp = 0;
        REP(j, int(t.size())){
            if(s.at(i+j)==t.at(j)) count_tmp++;
        }
        count = max(count, count_tmp);
    }
    PRINT(int(t.size())-count)

    return 0;
}