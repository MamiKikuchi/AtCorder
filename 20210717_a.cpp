#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    int ans = 0;
    if(n > a)
    ans = x * a + y * ( n -a );
    else
    ans = x * n;

    cout << ans << endl;

}