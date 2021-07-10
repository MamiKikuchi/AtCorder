#include<bits/stdc++.h>
using namespace std;

int x;
int dp[101010];


int main(){
    
    cin >> x;

    dp[0] = true;             // dp[0][0] だけ true に

    for(int i=0;i<x;i++){
        if(dp[i]){
            for(int j=0;j<6;j++){
                dp[i+j+100] = true;
            }
        }
    }

    if (dp[x]) cout << "1" << endl;
    else cout << "0" << endl;
}