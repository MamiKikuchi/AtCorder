#include<bits/stdc++.h>
using namespace std;


long long a, b;

int main(){
    cin >> a >> b;
    string ans;
    if((a < 0 && b > 0) || a == 0 || b == 0) ans = "Zero";
    else{
        if(b < 0 ){
            if((b-a+1)%2 == 0) ans = "Positive";
            else ans = "Negative";
        }else if(a > 0){
            ans = "Positive";
        }
    }

    cout << ans << endl;

}