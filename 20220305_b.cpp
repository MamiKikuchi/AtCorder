#include<bits/stdc++.h>
using namespace std;

string S;
vector<char> font;

int main(){
    cin >> S;
    font.resize((int)S.size());
    for(int i=0; i<(int)S.size(); ++i) font[i] = S[i];
    sort(font.begin(), font.end());

    string ans = "";
    for(int i=0; i<(int)S.size(); ++i) ans += font[i];

    cout << ans << endl;
}