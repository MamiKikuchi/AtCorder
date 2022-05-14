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
    map<string, pii> count{};
    vi T(n);
    REP(i, n){
        cin >> s >> T[i];
        count[s].first++;
        if(count[s].first == 1) count[s].second = i;   
    }
    int min_id = -1;
    int max_score = 0;
    for (const auto &item : count) {
            //cout << item.first << item.second.first << item.second.second << T[item.second.second]<< endl;
            if(min_id==-1){
                min_id = item.second.second + 1;
                max_score = T[min_id-1];
            }else{
                if(max_score < T[item.second.second]){
                    min_id = item.second.second +1;
                    max_score = T[min_id-1];
                }
            }
            //cout << min_id << max_score << endl;
        }
    PRINT(min_id)

    return 0;

}