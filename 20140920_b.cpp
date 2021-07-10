#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    long long b;
    cin >> a >> b;

    if(a.size() >= b){
        cout << a.at(b-1) << endl;
    }else{
        int cnt = b % int(a.size());
        if(cnt == 0) cout << a.at(int(a.size())-1) << endl;
        else cout << a.at(cnt-1) << endl;
    }
}