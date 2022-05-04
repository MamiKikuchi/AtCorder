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
    cin >> n;
    vll A(n);
    REP(i, n) cin >> A[i];
    sort(ALL(A));

    map<ll, ll> count{};
    
    REP(i, n){
        ll odd_even = 0;
        if((A[i] / 100) % 2 == 0) odd_even = 1;
        else odd_even = -1;
        ll surplus = A[i] % 100;
        if(surplus == 0) surplus = A[i] % 200;
        count[odd_even * surplus]++;
    }
    ll ans = 0;

    for (const auto &item : count) {
        if(item.second > 1) ans += (item.second*(item.second-1))/2;
    }
    PRINT(ans)
    return 0;
}