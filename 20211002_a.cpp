#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int diff = a-b;
    long long ans = pow(32, diff);
    cout << ans<< endl;
}