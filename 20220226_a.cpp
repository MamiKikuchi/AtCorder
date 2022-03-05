#include<bits/stdc++.h>
using namespace std;

int a[15];

int main(){
    for(int i=0; i<10; i++) cin >> a[i];
    int ans = a[a[a[0]]];

    cout << ans << endl;
    return 0;
}