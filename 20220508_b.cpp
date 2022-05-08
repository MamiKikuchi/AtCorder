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
    int n, a, b;
    cin >> n >> a >> b;
    int n_mas[n][n];
    REP(i, n){
        if(i%2==0) n_mas[i][0]=0;
        else n_mas[i][0]=1;
        REP2(j, 1, n){
            if(n_mas[i][j-1]==0) n_mas[i][j]=1;
            else n_mas[i][j]=0; 
        }
    }
    REP(i, n*a){
        REP(j, n*b){
            int x = i / a;
            int y = j / b;
            if(n_mas[x][y]==0) cout <<  ".";
            else cout << "#";
        }
        cout <<  endl;
    }
    return 0;
}