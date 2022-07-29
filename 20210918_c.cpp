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
    string X;
    int N;
    cin >> X >> N;
    map<char, int> dict{};
    REP(i, (int)X.size()) dict[X.at(i)-'a'] = i;
    vector<vi> S(N);
    string s;
    for(vector<int>& v : S){
        cin >> s;
        for(const char c:s){
            v.push_back(dict[c-'a']);
        }
    }
    sort(ALL(S));
    for(vector<int>& s:S){
        for(const int c:s){
            cout << X.at(c);
        }
        cout << '\n';
    }
    return 0;
}
// int main()
// {
//     string X;
//     int N;
//     cin >> X >> N;
//     map<char, int> dict{};
//     REP(i, (int)X.size()) dict[X.at(i)] = i;
//     vs S(N);
//     REP(i, N) cin >> S[i];
//     vector<pair<string,string>> new_sort(N);
//     REP(i, N){
//         new_sort[i].second = S[i];
//         REP(j, (int)S[i].size()){
//             new_sort[i].first += dict[S[i].at(j)];
//         }
//     }
//     sort(ALL(new_sort));
//     REP(i, N) PRINT(new_sort[i].second)
//     return 0;
// }