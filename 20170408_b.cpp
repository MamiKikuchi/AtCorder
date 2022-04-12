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
    string O, E;
    cin >> O >> E;
    int num = int(O.size())+int(E.size());
    vector<char> ans(num);
    int count = 0;
    REP(i, int(O.size())){
        ans[count] = O.at(i);
        count+=2;
    }
    count = 1;
    REP(i, int(E.size())){
        ans[count] = E.at(i);
        count+=2;
    }
    REP(i, num) cout << ans[i];
    cout << endl;
    return 0;
}