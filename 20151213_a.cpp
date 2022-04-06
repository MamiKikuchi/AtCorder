#include<bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;

    int digit = N / 9;
    int num = N % 9;

    if(num==0){
        digit --;
        num = 9;
    }

    string ans = "";
    for(int i=0; i<digit+1; i++){
        ans += to_string(num);
    } 
    cout << ans << endl;
}   