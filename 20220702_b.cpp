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
    int n, max_num = 0;
    pii ij, ij_2;
    cin >> n;
    vs S(n);
    vector<vll> A(n, vll(n));
    REP(i, n) cin >> S[i];
    REP(i, n){
        REP(j, n){
            A[i][j] = (int)(S[i].at(j) - '0');
            if(max_num < A[i][j]){
                max_num = A[i][j];
                ij.first = i;
                ij.second = j;
            }
        }
    }
    max_num = 0;
        REP2(i, -1, 2){
            REP2(j, -1, 2){
                if(ij.first + i != ij.first && ij.second + j != ij.second){
                    if((ij.first + i) >=n && (ij.second + j) >= n){
                        if(max_num < A[ij.first + i - n][ij.second + j - n]){
                            max_num = A[ij.first + i - n][ij.second + j - n];
                            ij_2.first = ij.first + i - n;
                            ij_2.second = ij.second + j - n;
                        }

                    }
                    else if((ij.second + j) < 0 && (ij.first + i) < 0 ){
                        if(max_num < A[ij.first + i  + n][ij.second + j  + n]){
                            max_num = A[ij.first + i  + n][ij.second + j + n];
                            ij_2.first = ij.first + i  + n;
                            ij_2.second = ij.second + j + n;
                        }

                    }
                    else if((ij.first + i) >=n){
                        if(max_num < A[ij.first + i - n][ij.second + j]){
                            max_num = A[ij.first + i - n][ij.second + j];
                            ij_2.first = ij.first + i - n;
                            ij_2.second = ij.second + j;
                        }

                    }else if((ij.second + j) >= n){
                        if(max_num < A[ij.first + i][ij.second + j - n]){
                            max_num = A[ij.first + i][ij.second + j - n];
                            ij_2.first = ij.first + i;
                            ij_2.second = ij.second + j - n;
                        }

                    }else if((ij.first + i) < 0 ){
                        if(max_num < A[ij.first + i + n][ij.second + j]){
                            max_num = A[ij.first + i][ij.second + j];
                            ij_2.first = ij.first + i + n;
                            ij_2.second = ij.second + j;
                        }

                    }else if((ij.second + j) < 0 ){
                        if(max_num < A[ij.first + i][ij.second + j + n]){
                            max_num = A[ij.first + i][ij.second + j + n];
                            ij_2.first = ij.first + i;
                            ij_2.second = ij.second + j + n;
                        }

                    }else if(max_num < A[ij.first + i][ij.second + j]){
                        max_num = A[ij.first + i][ij.second + j];
                        ij_2.first = ij.first + i;
                        ij_2.second = ij.second + j;

                    }
                }
            }
        }
    vll ans(n);
    ans[0] = A[ij.first][ij.second];
    ans[1] = A[ij_2.first][ij_2.second];
    int i_diff = ij_2.first - ij.first;
    int j_diff  = ij_2.second - ij.second;
    if(i_diff < -1) i_diff += n;
    else if(j_diff < -1) j_diff += n;
    else if(i_diff > 1) i_diff -= n;
    else if(j_diff > 1) j_diff -= n;
    REP(i, n-2){
       
            if (i_diff*(i+1) + ij_2.first >= n && j_diff*(i+1) + ij_2.second >= n) ans[i+2] = A[(i_diff*(i+1) + ij_2.first) % n][(j_diff*(i+1) + ij_2.second) % n];
            else if(i_diff*(i+1) + ij_2.first < 0 && j_diff*(i+1) + ij_2.second <0) ans[i+2] = A[i_diff*(i+1) + ij_2.first + n][j_diff*(i+1) + ij_2.second + n];
            else if(i_diff*(i+1) + ij_2.first >= n) ans[i+2] = A[(i_diff*(i+1) + ij_2.first) % n][j_diff*(i+1) + ij_2.second];
            else if(j_diff*(i+1) + ij_2.second >= n) ans[i+2] = A[i_diff*(i+1) + ij_2.first][(j_diff*(i+1) + ij_2.second) % n];
            else if(i_diff*(i+1) + ij_2.first < 0) ans[i+2] = A[i_diff*(i+1) + ij_2.first + n][j_diff*(i+1) + ij_2.second];
            else if(j_diff*(i+1) + ij_2.second < 0) ans[i+2] = A[i_diff*(i+1) + ij_2.first][j_diff*(i+1) + ij_2.second + n];
            else ans[i+2] = A[i_diff*(i+1) + ij_2.first][j_diff*(i+1) + ij_2.second];
        
    }
    REP(i, n) cout << ans[i];
    cout << endl;

    return 0;
}