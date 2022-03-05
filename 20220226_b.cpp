#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<long long> A, B;

int main(){
    cin >> n >> m;
    A.resize(n);
    B.resize(m);
    for(int i=0; i<n; i++) cin >> A[i];
    for(int i=0; i<m; i++) cin >> B[i];

    sort(A.begin(), A.end());
    map<long long, int> count; 


    for(int i=0; i<m; i++){
        if(count[B[i]] > 0){
            auto itr = find(A.begin(), A.end(), B[i]);
            int idx = distance(A.begin(), itr);
            if(A[idx] == A[idx+count[B[i]]] ) count[B[i]]++;
            else count[B[i]] = -1;

        }else{
            auto itr = find(A.begin(), A.end(), B[i]);
            if(itr != A.end()) count[B[i]]++;
            else count[B[i]] = 0;
        }
        

    }
    bool ans = true;
    for(auto x : count){
        if(x.second <= 0) ans = false;
    }
    if(ans) cout << "Yes" <<endl;
    else cout << "No" <<endl;


}