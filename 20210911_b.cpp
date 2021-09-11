#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> P(26);
    char moji;
    vector<char> alphabet;

    for(int i=0;i<26;i++){
        cin >> P[i];
    }
    for(moji='a';moji<='z';++moji){
        alphabet.push_back(moji);
    }

    for(int i : P){
        cout << alphabet[i-1];
    }
    cout << endl;

    return 0;
}