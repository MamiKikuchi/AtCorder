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
    int n, w;
    cin >> n >> w;
    vi A(n);
    REP(i, n) cin >> A[i];

    vi flg(w+1);
    
    //1個のみの時
    REP(i, n) if(A[i] <= w) flg[A[i]] = 1;

    //2個のみの時
    REP(i, n) REP2(j, i+1,n) if((A[i]+A[j]) <= w) flg[A[i]+A[j]] = 1;

    //3個の時
    REP(i, n) REP2(j, i+1, n) REP2(k, j+1, n) if((A[i]+A[j]+A[k]) <= w) flg[A[i]+A[j]+A[k]] = 1;

    int ans = 0;
    REP2(i,1, w+1) ans+=flg[i];
    PRINT(ans)
    
    return 0;
}

/*
解き方

・1以上W以下の全ての整数について
    ・「nは良い整数か」を管理するboolの配列flgを用意
    ・flgをfalse（良い整数でない）で初期化
・3個以下である錘の集合を全て調べる
    ・求めた各集合について錘の重さの和wを求める
    ・wがW以下の時：flg[w]をtureにする
・最終的な答え：trueであるフラグの個数

for-loop の x = 2 のときの例
  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
       異なるおもりの組 (i, j) について計算する
    }
  }
・計算量O(N^x)
・フラグ配列の分のO(W)
・1個の時、2個の時、3個の時の3パターンでO(N+N^2+N^3)
・合わせてO(W+N^3)→ 高速で動作可能

*/