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
    int a, b;
    string s;
    cin >> a >> b >> s;
    if(int(s.size())!=a+b+1){
        PRINT("No")
        return 0;
    }else if(s.at(a)!='-'){
        PRINT("No")
        return 0; 
    }else{
        REP(i, a+b+1){
            if(i!=a && !(s.at(i)>='0' && s.at(i)<='9')){
               PRINT("No")
               return 0;  
            }
        }
    }
    PRINT("Yes")

    return 0;
}