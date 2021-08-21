#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;

    if(n<=125) ans = 4;
    else if(n>125 && n<=211) ans = 6;
    else ans = 8;

    cout << ans << endl;

}