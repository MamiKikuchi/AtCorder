#include<bits/stdc++.h>
using namespace std;

double a, b, c, x,ans;

int main(){
    cin >> a >> b >> c >> x;

    if(x <= a){
        ans = 1.0;
    }else if(a < x && x <= b){
        ans =  c / (b-a);
    }else if(b < x) {
        ans = 0.0;
    } 
    cout << ans << endl;
}