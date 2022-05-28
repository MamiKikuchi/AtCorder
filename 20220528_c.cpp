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
    int Q, query_id, x, c;
    cin >> Q;
    vll S;
    map<int, int> count{};
    REP(i, Q){
        cin >> query_id;
        if(query_id == 1){
            cin >> x;
            S.push_back(x);
            count[x]++;
            //PRINT("query_id == 1")
            sort(ALL(S));
            //PRINT("sort")
        }else if(query_id == 2){
            cin >> x >> c;
            int del_num = min(c, count[x]);
            vi del_list;
            int idx = find(ALL(S), x);
            S.erase(S.begin()+idx, S.begin()+idx+del_num);
            //REP(i, int(S.size())) PRINT(S[i])
            //PRINT("query_id == 2")
        }else if(query_id == 3){
            //PRINT("query_id == 3")
            int S_size = int(S.size());
            PRINT(S[S_size-1]-S[0])
        }
    }
    return 0;
}