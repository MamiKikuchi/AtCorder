#include<bits/stdc++.h>
using namespace std;

long long  h, w;

int main(){
    cin >> h >> w;

    long long  ans = 0;

    if(h%2 == 0){
        ans = (h * w) / 2;
    }else if(h != 1){
        if(w%2 == 0) ans = ((h-1) * w) / 2 + w / 2;
        else if(w != 1) ans = ((h-1) * w) / 2 + ceil(double(w)/2.0);
        else ans = 1;
    }else{
        ans = 1;
    }

    cout << ans << endl;

}