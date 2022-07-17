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
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vi a(n), b(n);
    map<int, vi, std::greater<int>> A{}, B{}, sum{};
    REP(i, n){
        cin >> a[i];
        A[a[i]].push_back(i); 
    }
    REP(i, n){
        cin >> b[i];
        B[b[i]].push_back(i); 
    }
    REP(i, n){
        sum[a[i]+b[i]].push_back(i); 
    }
    //合格者の番号保存
    vi ans;
    int count = 0;
    for(const auto &item : A){
        if(count < x && count+(int)item.second.size() <= x){
            REP(i, (int)item.second.size()) ans.push_back(item.second[i]+1);
            count += (int)item.second.size();
        }else if(count < x){
            REP(i, x-count) ans.push_back(item.second[i]+1);
            count += x-count;
        }
        if(count == x) break;
        // REP(i, (int)ans.size())PRINT(ans[i])
        // PRINT(count)
    }
    int count2 = 0;
    for(const auto &item : B){
        if(count2 < y && count2+(int)item.second.size() <= y){
            REP(i, (int)item.second.size()){
                REP(j, (int)ans.size()){
                    if(item.second[i]+1 == ans[j]) continue;
                    else ans.push_back(item.second[i]+1);
                }
            }
            count2 += (int)item.second.size();
        }else if(count2 < y && count2+(int)item.second.size() > y){
            REP(i, y-count2){
                REP(j, (int)ans.size()){
                    if(item.second[i]+1 == ans[j]) continue;
                    else ans.push_back(item.second[i]+1);
                }
            }
            count2 += y-count2;
        }
        if(count2 == y) break;
        // REP(i, (int)ans.size())PRINT(ans[i])
        // PRINT(count2)
    }
    int count3 = 0;
    for(const auto &item : sum){
        cout << item.first << endl;
        if(count3 < y && count3+(int)item.second.size() <= z){
            REP(i, (int)item.second.size()){
                REP(j, (int)ans.size()){
                    cout << item.second[i]+1 << " " << ans[j] << endl;
                    if(item.second[i]+1 == ans[j]) break;
                    else ans.push_back(item.second[i]+1);
                }
            }
            count3 += (int)item.second.size();
        }else if(count3 < z){
            REP(i, z-count3){
                REP(j, (int)ans.size()){
                    cout << item.second[i]+1 << " " << ans[j] << endl;
                    if(item.second[i]+1 == ans[j]) break;
                    else ans.push_back(item.second[i]+1);
                }
            }
            count3 += z-count3;
        }
        if(count3 == z) break;
    }

    REP(i, (int)ans.size())PRINT(ans[i])
    return 0;
}