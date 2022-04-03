#include<bits/stdc++.h>
using namespace std;

int x[4], y[4];

int main(){
    for(int i=0; i<3; i++) cin >> x[i] >> y[i];

    int ans[2];

    if(x[0] == x[1]) ans[0] = x[2];
    else if(x[0] == x[2]) ans[0] = x[1];
    else  ans[0] = x[0];
    if(y[0] == y[1]) ans[1] = y[2];
    else if(y[0] == y[2]) ans[1] = y[1];
    else  ans[1] = y[0];

    cout << ans[0] << " " << ans[1];

}