#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int ans = abs(a-b);

    int ans2 = 10-abs(a-b);

    cout << min(ans,ans2) << endl;
}