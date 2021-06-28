#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool check = true;

    cin >> s;

    int n = int(s.size()/2)+1;
    //cout << n << endl;
    
    for(int i=0;i<n;i++){
        if(s.at(i)=='*' || s.at(int(s.size())-1-i)=='*') check = true;
        else if(s.at(i)!=s.at(int(s.size())-1-i)){
            check = false;
            break;
        }
    }

    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
}