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
    string S;
    cin >> S;
    int S_size = (int)S.size();
    //先頭と末尾のaの数を取得
    int head_a = 0, tail_a =0;
    REP(i, S_size){
        if(S.at(i) != 'a') break;
        head_a++;
    }
    for(int i= S_size-1; i>=0; i--){
        if(S.at(i) != 'a') break;
        tail_a++;
    }
    //全てがaだと元々回文
    if(head_a == S_size){
        PRINT("Yes")
        return 0;
    }
    //head > tailの場合回文にならない
    else if(head_a > tail_a){
        PRINT("No")
        return 0;
    }
    //head <= tailの場合、aでないtail-head個の文字が回文か判定
    else if(head_a <= tail_a){
        int diff = tail_a - head_a;
        REP2(i, head_a, S_size-1-diff){
            if(S.at(i) != S.at(S_size-1-diff-i)){
                PRINT("No")
                return 0;
            }
        }
    }
    PRINT("Yes")
    return 0;
    
}