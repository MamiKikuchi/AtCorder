#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A1, A2, A3;
    cin >> A1 >> A2 >> A3;

    long long dif = abs(abs(A2- A1) - abs(A3 - A2));


    long long a2 = (A1+A3)/2;
    if((A1 + A3)%2!=0) a2+=2;
    
    if(a2 <= A2){
        dif = A2 * 2 - (A1 + A3);
    }else{
        dif = a2 - A2;
    }

    cout << dif << endl;
    return 0;
}