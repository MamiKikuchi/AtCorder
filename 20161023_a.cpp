#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int num = 0;

    for(int i=0;i<int(s.size());i++){
        if(s.at(i) == 'C') num = 1;
        else if( num ==1 && s.at(i) == 'F') num = 2;
    }

    if(num == 2) cout << "Yes" << endl;
    else cout << "No" << endl;
}