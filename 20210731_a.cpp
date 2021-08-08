#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    string ans;

    if(a == 0) ans = "Silver";
    else if (b == 0) ans = "Gold";
    else ans = "Alloy";

    cout << ans << endl;
}