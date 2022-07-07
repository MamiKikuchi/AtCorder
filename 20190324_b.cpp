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
    string s;
    cin >> s;
    string ans = "", tmp="";
    if(s.size() == 1){
        if(s.at(0)=='A' || s.at(0)=='C' || s.at(0)=='G' || s.at(0)=='T') ans += s.at(0);
    }else{
        REP(i, int(s.size())){
            //隣り合った文字がACGTである場合保存
            if(s.at(i)=='A' || s.at(i)=='C' || s.at(i)=='G' || s.at(i)=='T'){
                tmp += s.at(i);

            }else{
                //ACGT文字列が最長の場合保存
                if(ans.size() < tmp.size()) ans = tmp;
                tmp = "";
            }
        }
        if(ans.size() < tmp.size()) ans = tmp;
    }
    
    PRINT(ans.size())
    return 0;
}