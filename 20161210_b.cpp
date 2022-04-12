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
    int H, W;
    cin >> H >> W;
    vs tmp(H);
    REP(i, H) cin >> tmp[i];
    vector<vector<char>> C(H, vector<char>(W, ' '));
    REP(i, H) REP(j, W) C[i][j] = tmp[i].at(j);
    
    vector<vector<char>> ans(2*H, vector<char>(W, ' '));
    REP(i, 2*H) {
        REP(j, W)  cout << C[i/2][j];
        cout << endl;
    }

    return 0;
}