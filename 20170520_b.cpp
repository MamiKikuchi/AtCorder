#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    vector<string> s;
    s.resize(h);

    for(int i=0;i<h;i++) cin >> s[i];

    for(int i=0;i<w+2;i++){
        if(i==w+1) cout << "#" << endl;
        else cout << "#";
    }

    for(int i=0;i<h;i++) cout << "#" << s[i] << "#" << endl;

    for(int i=0;i<w+2;i++){
        if(i==w+1) cout << "#" << endl;
        else cout << "#";
    }

}