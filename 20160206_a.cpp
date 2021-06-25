#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    string N, tmp;
    cin >> N;
    
    for(int i=0;i<3;i++){
        if(N.at(i) == N.at(i+1)) count++;
        //cout << count << endl;
    }

    if(count==3) cout << "SAME" << endl;
    else cout << "DIFFERENT" << endl;
}