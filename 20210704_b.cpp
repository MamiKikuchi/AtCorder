#include<bits/stdc++.h>
using namespace std;

int kaiki(int n){
    int sum=1;
    for (int i=n;i>=1;i--)sum*=i;
    return sum;
}

int main(){
    long long p;
    cin >> p;

    int count = 0;
    for(int i=10;i>=1;i--){
        long long num =p/kaiki(i);
        
        if(num>0){
            p-=kaiki(i)*num;
            //cout << p << endl;
            count+= num;
        }
    }

    cout << count << endl;
}