#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K,X,Y;
    cin >> N >> K >> X >> Y;

    int sum = 0;

    if( N >= K)  sum = K * X + (N - K) * Y;
    else sum = N * X;

    cout << sum << endl;


}