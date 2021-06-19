#include<bits/stdc++.h>
using namespace std;


int main(){
    int N,ans=0,count=0;
    cin >> N;
    
    for(int i=0;i<N;i++){
        ans+=i;
        if(ans >= N) break;
        count +=1;

    }

    cout << count << endl;
}