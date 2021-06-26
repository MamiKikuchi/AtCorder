#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    int ans = 0;

    if( (C * D - B) <= 0 ){
        ans = -1;
    }else{
        ans = ceil(float(A / (float)( C * D - B ))) ;
    }

    cout << ans << endl;
}