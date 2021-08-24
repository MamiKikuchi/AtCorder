#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    int k;

    cin >> s >> k;

    vector<char> S;
    for(int i=0;i<(int)s.size();i++){
        S.push_back(s.at(i));
    }

    sort(S.begin(), S.end());

    int count = 0;
    do{
        /*
        for(char c:S) cout << c<< " ";
        cout << endl;
        */
        if(count == k-1){
            for(char c:S) ans += c;
        }
        count++;
        
    }while(next_permutation(S.begin(), S.end()));
    cout << ans << endl;
}