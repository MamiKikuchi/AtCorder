#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s, S(3);
    string t;

    cin >> S[0] >> S[1] >> S[2] >>t;

    

    for(int i=0; i < int(t.size()); i++){
        for(int j=0;j<3;j++){
            if(int(t.at(i)-'0') == j+1){
                s.push_back(S[j]);
                
            }
        }
    }

    for(string ans :s){
        cout << ans;
    }
    cout << endl;
}