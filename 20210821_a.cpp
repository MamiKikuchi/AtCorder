#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    string S2 = "Hello,World!";

    string ans = "AC";

    if((int)S.size() != (int)S2.size()){
        ans = "WA";
    }else{
        for(int i=0;i<(int)S.size();i++){
            if(S.at(i)!=S2.at(i)) ans = "WA";
        }
    }
    

    cout << ans << endl;
}