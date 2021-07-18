#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int cnt[3] = {0};//0で初期化
    while(n){
        cnt[n % 10 % 3]++;
        n /= 10;
    }

    int rem = (cnt[1] + 2 * cnt[2]) % 3; //全体のあまり
    int k = cnt[0] + cnt[1] + cnt[2]; //桁数

    int ans = 0;

    if(rem == 0) ans = 0;
    else if(rem == 1){
        if(cnt[1]){
            if(k == 1) ans = -1;
            else ans = 1;
        }else{
            if(k == 2) ans = -1;
            else ans = 2;
        }
    }else{
        if(cnt[2]){
            if(k == 1) ans = -1;
            else ans = 1;
        }else{
            if(k == 2) ans = -1;
            else ans = 2;
        }
    }

    cout << ans << endl;
}