#include<bits/stdc++.h>
using namespace std;

string S;

int main(){
    cin >> S;

    string ans = S;

    for(int i=0; i < int(ans.size()); i++){
        if(ans.at(0) >= 'a' && ans.at(0) <= 'z') ans.at(0) = toupper(ans.at(0));
        else if(i > 0){
            if(ans.at(i) >= 'A' && ans.at(i) <= 'Z') ans.at(i) = tolower(ans.at(i));
        }
    }

    cout << ans << endl;
}