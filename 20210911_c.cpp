#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cin >> n;

        vector<vector<char>> S(n,vector<char>(n)), T(n,vector<char>(n));

    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> S.at(i).at(j);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> T.at(i).at(j);


}