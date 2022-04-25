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
    int n, m;
    ll a, b;
    cin >> n >> m;
    vector<pair<ll, char>> AB(n+m);
    REP(i, n){
        cin >> a;
        AB[i].first = a;
        AB[i].second = 'A';
    }
    REP(i, m){
        cin >> b;
        AB[i+n].first = b;
        AB[i+n].second = 'B';
    }

    sort(ALL(AB));
    ll min_diff = AB[n+m-1].first;
    REP(i, n+m-1){
        if((AB[i+1].second == 'A' && AB[i].second == 'B') || (AB[i].second == 'A' && AB[i+1].second == 'B')){
            if(min_diff > AB[i+1].first-AB[i].first){
                min_diff = AB[i+1].first-AB[i].first;
            }
        }        
    }
    PRINT(min_diff)

    return 0;
}