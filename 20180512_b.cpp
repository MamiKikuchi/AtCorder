#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    

    int maxPow = 1;

    for(int i=2;i<9;i++){
        for(int j=1;j<=31;j++){
            if(pow(j,i)<= x){
                if(maxPow < pow(j,i)) maxPow = pow(j,i);
                //cout << maxPow <<j << i <<endl;
            }
        }
    }

    cout << maxPow << endl;

}