#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    cin >> n;


  
    for(int i=1;i<38;i++){
        for(int j=1;j<26;j++){
            long long pow_3 = pow(3,i);
            long long pow_5 = pow(5,j);
            if(pow_3 + pow_5 == n){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;

}