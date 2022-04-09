#include<bits/stdc++.h>
using namespace std;

using ll=long long;

ll n, k, a;
map<ll, ll> A{};

int main(){
    cin >> n >> k;

    for(int i=0;i<n;i++){
        cin >> a;
        A[i] = a;
    }
    int ans = -1;
    /*
    ll min_s = A[0];
    for(int i=0; i<k; i++) if(A[i] < min_s)  min_s = A[i];

    ll max_id = n-1;
    ll max_num = A[n-1];
    for(int i=n-1; i>=k; i--){
        if(min_s < A[i]){
            max_num = A[i];
            max_id = i;
        }
    }
    ll min_id = k-1;
    ll min_num = A[k-1];
    for(int i=0; i<k; i++){
        if(A[i] < max_num){
            min_num = A[i];
            min_id = i;
        }
    }

    if(min_num < max_num) ans = max_id - min_id;
    */


    cout << ans << endl;

}