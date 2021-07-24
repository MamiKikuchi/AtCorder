#include<bits/stdc++.h>
using namespace std;

int main(){
    string S[4];
    string S2[] = {"H", "2B", "3B", "HR"};

    for(int i=0;i<4;i++) cin >> S[i];

    map<int, int> mp;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(S[i] == S2[j]) mp[j]++;
            
        }
    }

    if(mp.size()==4) cout << "Yes" << endl;
    else cout << "No" << endl;

}