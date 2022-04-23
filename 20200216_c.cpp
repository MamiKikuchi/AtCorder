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
    int n;
    string s;
    cin >> n;
    map<string, int> S{};
    REP(i, n){
        cin >> s;
        S[s] += 1;
    }

    vector<pair<int, string>> S_v(int(S.size()));
    int i=0;
    for (const auto& [key, value] : S){
        S_v[i].first = value * -1;
        S_v[i].second = key;
        i++;
    }
    sort(ALL(S_v));
    PRINT(S_v[0].second)
    REP2(i, 1, int(S.size())){
        if(S_v[i].first == S_v[0].first) PRINT(S_v[i].second)
    }

    return 0;
}